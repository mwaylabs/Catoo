//
//  CA2Settings.h
//  CatalogKit
//
//  Created by Matthias Nagel on 11.07.12.
//  Copyright (c) 2012 M-Way Solutions GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    CA2MenuPresentation_Bookshelf,
    CA2MenuPresentation_Coverflow,
    CA2MenuPresentation_Carousel
} CA2MenuPresentation;

typedef enum {
    CA2AnimationType_NormalAnimation,
    CA2AnimationType_ScaleAnimation,
    CA2AnimationType_BookAnimation
} CA2AnimationType;

@interface CA2Settings : NSObject
{
    NSString *title;
    bool defineMenuPresentation;
    CA2MenuPresentation menuPresentation;
    CA2AnimationType animationType;
    bool menuInfoButton;
    bool infoFromWeb;
    NSString *infoUrl;
    bool pageCountVisible;
    bool tableOfContents;
    bool showThumbnails;
    bool bookmarksEnabled;
    bool catalogSearch;
    UIColor *ciColor;
    NSString *ciFont;
    NSString *catalogsPath;
    bool playSound;
    
    bool playBackgroundSound;
    NSString *backgroundSoundFile;
    
    bool facebook;
    NSString *facebookMessageText;
    NSString *facebookImageFile;
    NSString *facebookLinkUrl;
    NSString *facebookTitleText;
    
    bool twitter;
    NSString *twitterMessageText;
    NSString *twitterImageFile;
    NSString *twitterLinkUrl;
    NSString *twitterTitleText;
    
    bool showSplash;
    bool isSplashVideo;
    NSString *splashImagePortraitFile;
    NSString *splashImageLandscapeFile;
    NSString *splashVideoSourceFile;
    int imageSplashDuration;
    
    bool showLibVersion;
    
    NSString *infoFlagFile;
    NSString *galleryFlagFile;
    NSString *videoFlagFile;
    NSString *webViewFlagFile;
}

+ (CA2Settings*)defaultSettings;

/*-----------------------------------------------------------------*/

/* Title of app, shown on top navigationbar */
//Default: nil (shows Catoo-Logo)
@property (nonatomic,copy)		NSString *title;

/*-----------------------------------------------------------------*/

/* Set YES if user can define menu presentation style */
//Default: YES
@property (nonatomic,assign)	bool defineMenuPresentation;

/* Set catalog animation type */
//Book Animation = CA2AnimationType_BookAnimation;
//Scale Animation = CA2AnimationType_ScaleAnimation;
//Normal Animation = CA2AnimationType_NormalAnimation;
//Default: CA2AnimationType_BookAnimation
@property (nonatomic,assign)	CA2AnimationType animationType;

/* Set menu overview presentation style */
//Bookshelf = CA2MenuPresentation_Bookshelf;
//Coverflow = CA2MenuPresentation_Coverflow;
//Rondel = CA2MenuPresentation_Rondel;
//Default: CA2MenuPresentation_Bookshelf
@property (nonatomic,assign)	CA2MenuPresentation menuPresentation;

/*-----------------------------------------------------------------*/

/* Show Info button on menu overview navigationbar */
//Default: YES
@property (nonatomic,assign)	bool menuInfoButton;

/* Info from Web (If Yes you have to set URL, else put HTML to Ressources Info/index.html) */
//Default: YES
@property (nonatomic,assign)	bool infoFromWeb;

/* Web-URL if infoFromWeb = YES */
//Default: @"http://www.catoo.io"
@property (nonatomic,copy)		NSString *infoUrl;

/*-----------------------------------------------------------------*/

/* Show pagecount in toolbar */
//Default: YES
@property (nonatomic,assign)	bool pageCountVisible;

/* Show contents button on toolbar */
//Default: YES
@property (nonatomic,assign)	bool tableOfContents;

/* Show thumbnail button on toolbar */
//Default: YES
@property (nonatomic,assign)    bool showThumbnails;

/* Enable Bookmarks */
//Default: YES
@property (nonatomic,assign)	bool bookmarksEnabled;

/* Catalog Search enabled */
//Default: YES
@property (nonatomic,assign)	bool catalogSearch;

/*-----------------------------------------------------------------*/

/* Set CI Color */
//Default: [UIColor blackColor]
@property (nonatomic,retain)	UIColor *ciColor;

/* Set CI FontName */
//Default: @"HiraMinProN-W6"
@property (nonatomic,copy)		NSString *ciFont;

/*-----------------------------------------------------------------*/

/* List of Catalog source Path, relativ to application path. e.g: @"Catalogs1;Catalog2;Catalog3" */
//Default: @"Catalogs/*"
@property (nonatomic,copy)		NSString *catalogsPath;

/*-----------------------------------------------------------------*/

/* Curl Sound */
//Default: NO
@property (nonatomic,assign)	bool playSound;

/*-----------------------------------------------------------------*/

/* Background Sound in an infinity loop */
//Default: NO
@property (nonatomic, assign)   bool playBackgroundSound;
@property (nonatomic, copy)     NSString *backgroundSoundFile;

/* Show Facebook button */
//Default: NO
@property (nonatomic,assign)	bool facebook;
@property (nonatomic,copy)      NSString *facebookMessageText;
@property (nonatomic,copy)      NSString *facebookImageFile;
@property (nonatomic,copy)      NSString *facebookLinkUrl;
@property (nonatomic,copy)      NSString *facebookTitleText;

/*-----------------------------------------------------------------*/

/* Show Twitter button */
//Default: NO
@property (nonatomic,assign)	bool twitter;
@property (nonatomic,copy)      NSString *twitterMessageText;
@property (nonatomic,copy)      NSString *twitterImageFile;
@property (nonatomic,copy)      NSString *twitterLinkUrl;
@property (nonatomic,copy)      NSString *twitterTitleText;

/*-----------------------------------------------------------------*/

/* Show Splash View */
//Default: YES
@property (nonatomic, assign)   bool showSplash;

//Default: NO
@property (nonatomic, assign)   bool isSplashVideo;
@property (nonatomic, copy)     NSString *splashVideoSourceFile;

@property (nonatomic, copy)     NSString *splashImagePortraitFile;
@property (nonatomic, copy)     NSString *splashImageLandscapeFile;
@property (nonatomic, assign)   int imageSplashDuration;

//Default: YES
@property (nonatomic, assign)   bool showLibVersion;
/*-----------------------------------------------------------------*/

@property (nonatomic,copy)      NSString *infoFlagFile;
@property (nonatomic,copy)      NSString *galleryFlagFile;
@property (nonatomic,copy)      NSString *videoFlagFile;
@property (nonatomic,copy)      NSString *webViewFlagFile;


@end
