//
//  CA2Library.h
//  CatooLibrary
//
//  Created by Matthias Nagel on 19.07.12.
//  Copyright (c) 2012 M-Way Solutions GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CA2Settings.h"

@class CA2Catalog;
@class CA2Settings;

@interface CA2Library : NSObject
{
	NSMutableData *_responseData;
}

+ (CA2Library*)sharedInstance;
- (void)initializeWithSettings:(CA2Settings*)settings;

- (BOOL)handleOpenURL:(NSURL*)url;

- (UIViewController*) createCatalogSelectionViewController;
- (UIViewController*) createCatalogViewController: (CA2AnimationType) animationType catalog: (CA2Catalog*) catalog;

@property (nonatomic,readonly) NSArray* catalogs;
@property (nonatomic,retain)   CA2Catalog* currentCatalog;

@property (nonatomic,readonly) NSString* libraryVersion;
@property (nonatomic,readonly) NSString* libraryBuildDate;

@end
