//
//  AppDelegate.m
//  CatooDemo
//
//  Created by Matthias Nagel on 11.07.12.
//  Copyright (c) 2012 M-Way Solutions GmbH. All rights reserved.
//

#import "AppDelegate.h"
#import <CA2Library/CA2Library.h>
#import <CA2Library/CA2Settings.h>

@implementation AppDelegate

- (void)dealloc
{
    [window release];
    [controller release];
    [super dealloc];
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [UIApplication sharedApplication].statusBarHidden = YES;
    
    //Configuration
    CA2Settings *settings = [[[CA2Settings alloc] init] autorelease];
    settings.ciColor			  = [UIColor blackColor];
    settings.facebook			  = YES;
    settings.twitter			  = YES;
    settings.showSplash        	  = YES;
	settings.splashImagePortraitFile  = @"splash_portrait.png";
    settings.splashImageLandscapeFile = @"splash_landscape.png";
    settings.menuPresentation = CA2MenuPresentation_Coverflow;

    [[CA2Library sharedInstance] initializeWithSettings:settings];
	
	window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
	window.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"background.png"]];
	    
    controller = [[CA2Library sharedInstance] createCatalogSelectionViewController];

    [window setRootViewController:controller];
    	
    [window makeKeyAndVisible];
    
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
}

- (void)applicationWillTerminate:(UIApplication *)application
{
}

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation
{
    return [[CA2Library sharedInstance] handleOpenURL:url];
}

@end