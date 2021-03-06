/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSString, NSURL, NSArray, UIImage, NSMutableData, NSURLConnection;

@interface UIWebClip : NSObject {
	NSString *identifier;	// 4 = 0x4
	NSURL *pageURL;	// 8 = 0x8
	NSArray *icons;	// 12 = 0xc
	unsigned currentIconIndex;	// 16 = 0x10
	NSURL *startupImageURL;	// 20 = 0x14
	NSURL *startupLandscapeImageURL;	// 24 = 0x18
	NSString *title;	// 28 = 0x1c
	BOOL fullScreen;	// 32 = 0x20
	BOOL classicMode;	// 33 = 0x21
	BOOL removalDisallowed;	// 34 = 0x22
	BOOL iconIsScreenShotBased;	// 35 = 0x23
	BOOL iconIsPrecomposed;	// 36 = 0x24
	BOOL iconIsPrerendered;	// 37 = 0x25
	unsigned supportedOrientations;	// 40 = 0x28
	int statusBarStyle;	// 44 = 0x2c
	UIImage *iconImage;	// 48 = 0x30
	UIImage *startupImage;	// 52 = 0x34
	UIImage *startupLandscapeImage;	// 56 = 0x38
	id delegate;	// 60 = 0x3c
	NSMutableData *_customIconData;	// 64 = 0x40
	NSURLConnection *_iconConnection;	// 68 = 0x44
	NSMutableData *_customStartupImageData;	// 72 = 0x48
	NSURLConnection *_startupImageConnection;	// 76 = 0x4c
	NSMutableData *_customStartupLandscapeImageData;	// 80 = 0x50
	NSURLConnection *_startupLandscapeImageConnection;	// 84 = 0x54
}
@property(assign) BOOL classicMode;	// G=0x304af2e1; S=0x304af2f9; @synthesize
@property(assign) id delegate;	// G=0x304af401; S=0x304af415; @synthesize
@property(assign) BOOL fullScreen;	// G=0x304af2b1; S=0x304af2c9; @synthesize
@property(readonly, assign, nonatomic) UIImage *iconImage;	// G=0x304acdc5; 
@property(readonly, assign) NSString *iconImagePath;	// G=0x304accb1; 
@property(readonly, assign) BOOL iconIsPrecomposed;	// G=0x304af359; @synthesize
@property(readonly, assign) BOOL iconIsPrerendered;	// G=0x304af371; @synthesize
@property(readonly, assign) BOOL iconIsScreenShotBased;	// G=0x304af341; @synthesize
@property(retain) NSArray *icons;	// G=0x304af221; S=0x304af235; @synthesize
@property(copy) NSString *identifier;	// G=0x304af1d9; S=0x304af1ed; @synthesize
@property(retain) NSURL *pageURL;	// G=0x304af1fd; S=0x304af211; @synthesize
@property(assign) BOOL removalDisallowed;	// G=0x304af311; S=0x304af329; @synthesize
@property(retain, nonatomic) UIImage *startupImage;	// G=0x304acea1; S=0x304af3e1; @synthesize
@property(retain) NSURL *startupImageURL;	// G=0x304af245; S=0x304af259; @synthesize
@property(retain, nonatomic) UIImage *startupLandscapeImage;	// G=0x304aced1; S=0x304af3f1; @synthesize
@property(retain) NSURL *startupLandscapeImageURL;	// G=0x304af269; S=0x304af27d; @synthesize
@property(assign) int statusBarStyle;	// G=0x304af3b5; S=0x304af3c9; @synthesize
@property(assign) unsigned supportedOrientations;	// G=0x304af389; S=0x304af39d; @synthesize
@property(copy) NSString *title;	// G=0x304af28d; S=0x304af2a1; @synthesize
+ (id)_contentForMetaName:(id)metaName inWebDocumentView:(id)webDocumentView;	// 0x304ad26d
+ (BOOL)bundleIdentifierContainsWebClipIdentifier:(id)identifier;	// 0x304ad1e9
+ (id)pathForWebClipCacheWithIdentifier:(id)identifier;	// 0x304af0d5
+ (id)pathForWebClipStorageWithIdentifier:(id)identifier;	// 0x304af071
+ (id)pathForWebClipWithIdentifier:(id)identifier;	// 0x304af029
+ (id)urlForWebClipWithIdentifier:(id)identifier;	// 0x304af151
+ (BOOL)webClipClassicModeValueForWebDocumentView:(id)webDocumentView;	// 0x304ad451
+ (BOOL)webClipFullScreenValueForWebDocumentView:(id)webDocumentView;	// 0x304ad3e5
+ (id)webClipIconsForWebDocumentView:(id)webDocumentView;	// 0x304ad955
+ (id)webClipIdentifierFromBundleIdentifier:(id)bundleIdentifier;	// 0x304ad20d
+ (unsigned)webClipOrientationsForWebDocumentView:(id)webDocumentView;	// 0x304ad469
+ (int)webClipStatusBarStyleForWebDocumentView:(id)webDocumentView;	// 0x304ad375
+ (id)webClipTitleForWebDocumentView:(id)webDocumentView;	// 0x304ad431
+ (id)webClipWithIdentifier:(id)identifier;	// 0x304ad001
+ (id)webClipWithURL:(id)url;	// 0x302cc111
+ (id)webClips;	// 0x304ad049
+ (id)webClipsDirectoryPath;	// 0x304aefb9
- (id)_bundleImageWithName:(id)name;	// 0x304acc71
- (id)_bundleResourceWithName:(id)name;	// 0x304acbed
- (id)_info;	// 0x304ac57d
- (id)_initWithIdentifier:(id)identifier;	// 0x304acb45
- (void)_readPropertiesFromBundle:(CFBundleRef)bundle;	// 0x304ac025
- (void)_reloadProperties;	// 0x304ac505
- (void)_setIconImage:(id)image isPrecomposed:(BOOL)precomposed isScreenShotBased:(BOOL)based;	// 0x304acdf5
- (BOOL)_writeImage:(id)image toDiskWithFileName:(id)fileName;	// 0x304ac7f1
- (id)bundleIdentifier;	// 0x304ad899
- (void)cancelMediaUpdate;	// 0x304ad67d
// declared property getter: - (BOOL)classicMode;	// 0x304af2e1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x304aeb0d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x304ad7e9
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x304aec45
- (void)connectionDidFinishLoading:(id)connection;	// 0x304ae595
- (BOOL)createOnDisk;	// 0x304aca2d
- (void)dealloc;	// 0x304acf01
// declared property getter: - (id)delegate;	// 0x304af401
// declared property getter: - (BOOL)fullScreen;	// 0x304af2b1
- (id)generateIconImageForFormat:(int)format scale:(float)scale;	// 0x304acccd
- (id)getStartupImage:(int)image;	// 0x304af1b1
// declared property getter: - (id)iconImage;	// 0x304acdc5
// declared property getter: - (id)iconImagePath;	// 0x304accb1
// declared property getter: - (BOOL)iconIsPrecomposed;	// 0x304af359
// declared property getter: - (BOOL)iconIsPrerendered;	// 0x304af371
// declared property getter: - (BOOL)iconIsScreenShotBased;	// 0x304af341
// declared property getter: - (id)icons;	// 0x304af221
// declared property getter: - (id)identifier;	// 0x304af1d9
// declared property getter: - (id)pageURL;	// 0x304af1fd
// declared property getter: - (BOOL)removalDisallowed;	// 0x304af311
- (BOOL)removeFromDisk;	// 0x304acadd
- (void)requestCustomIconUpdate;	// 0x304aecbd
- (void)requestCustomLandscapeStartupImageUpdate;	// 0x304aeed9
- (void)requestCustomPortraitStartupImageUpdate;	// 0x304aedf9
- (void)requestIconUpdateInSpringBoard;	// 0x304ad8f1
// declared property setter: - (void)setClassicMode:(BOOL)mode;	// 0x304af2f9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x304af415
// declared property setter: - (void)setFullScreen:(BOOL)screen;	// 0x304af2c9
- (void)setIconImage:(id)image isPrecomposed:(BOOL)precomposed;	// 0x304ace5d
- (void)setIconImageFromScreenshot:(id)screenshot;	// 0x304ace81
// declared property setter: - (void)setIcons:(id)icons;	// 0x304af235
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x304af1ed
// declared property setter: - (void)setPageURL:(id)url;	// 0x304af211
// declared property setter: - (void)setRemovalDisallowed:(BOOL)disallowed;	// 0x304af329
// declared property setter: - (void)setStartupImage:(id)image;	// 0x304af3e1
// declared property setter: - (void)setStartupImageURL:(id)url;	// 0x304af259
// declared property setter: - (void)setStartupLandscapeImage:(id)image;	// 0x304af3f1
// declared property setter: - (void)setStartupLandscapeImageURL:(id)url;	// 0x304af27d
// declared property setter: - (void)setStatusBarStyle:(int)style;	// 0x304af3c9
// declared property setter: - (void)setSupportedOrientations:(unsigned)orientations;	// 0x304af39d
// declared property setter: - (void)setTitle:(id)title;	// 0x304af2a1
// declared property getter: - (id)startupImage;	// 0x304acea1
// declared property getter: - (id)startupImageURL;	// 0x304af245
// declared property getter: - (id)startupLandscapeImage;	// 0x304aced1
// declared property getter: - (id)startupLandscapeImageURL;	// 0x304af269
// declared property getter: - (int)statusBarStyle;	// 0x304af3b5
- (void)stopLoadingCustomIcon;	// 0x304ad6bd
- (void)stopLoadingStartupImage;	// 0x304ad721
- (void)stopLoadingStartupLandscapeImage;	// 0x304ad785
// declared property getter: - (unsigned)supportedOrientations;	// 0x304af389
// declared property getter: - (id)title;	// 0x304af28d
- (BOOL)tryLoadingNextCustomIcon;	// 0x304ae53d
- (void)updateCustomMediaLocationsFromWebDocumentView:(id)webDocumentView;	// 0x304adf25
- (BOOL)updateOnDisk;	// 0x304ac8a5
@end

