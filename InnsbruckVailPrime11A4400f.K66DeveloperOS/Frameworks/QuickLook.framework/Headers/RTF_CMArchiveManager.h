/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import </libobjc.A.h>

@class NSMutableSet, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RTF_CMArchiveManager : NSObject {
	BOOL mIsThumbnail;	// 4 = 0x4
	unsigned mPageCount;	// 8 = 0x8
	NSMutableDictionary *mDrawableCache;	// 12 = 0xc
	NSString *mResourcePathPrefix;	// 16 = 0x10
	NSMutableSet *mPausedPaths;	// 20 = 0x14
	int mHeight;	// 24 = 0x18
	int mWidth;	// 28 = 0x1c
}
@property(assign) BOOL isThumbnail;	// G=0x2f2f1075; S=0x2f2f1065; converted property
@property(assign) unsigned pageCount;	// G=0x2f2f1095; S=0x2f2f1085; converted property
@property(retain) id resourcePathPrefix;	// G=0x2f2f0ff5; S=0x2f2f0fb9; converted property
+ (id)hashKeyFor:(id)aFor;	// 0x2f2f102d
+ (id)resourceTypeToExtension:(int)extension;	// 0x2f2f1149
+ (id)resourceTypeToMIME:(int)mime;	// 0x2f2f10c9
- (id)init;	// 0x2f2f0bc1
- (id)addCssStyle:(id)style;	// 0x2f2f0fad
- (void)addCssStyle:(id)style withName:(id)name;	// 0x2f2f0fb1
- (id)addResource:(id)resource withName:(id)name;	// 0x2f2f0dc1
- (id)addResource:(id)resource withType:(int)type;	// 0x2f2f0d4d
- (id)addResourceForDrawable:(id)drawable withType:(int)type drawable:(id)drawable3;	// 0x2f2f0e35
- (id)appendResourcePathToName:(id)name;	// 0x2f2f1005
- (id)cachedPathForDrawable:(id)drawable;	// 0x2f2f0ebd
- (void)closeResourceAtPath:(id)path;	// 0x2f2f0d45
- (void)commitDataAtPath:(id)path;	// 0x2f2f0d49
- (id)cssStylesheetString;	// 0x2f2f0fb5
- (void)dealloc;	// 0x2f2f0c41
- (BOOL)isProgressive;	// 0x2f2f10a5
// converted property getter: - (BOOL)isThumbnail;	// 0x2f2f1075
- (id)newResourceWithName:(id)name;	// 0x2f2f0ca5
- (id)newResourceWithType:(int)type;	// 0x2f2f0ca9
// converted property getter: - (unsigned)pageCount;	// 0x2f2f1095
- (void)pauseProgressiveMappingOnPath:(id)path;	// 0x2f2f0f05
- (BOOL)progressiveMappingIsPausedOnPath:(id)path;	// 0x2f2f0f6d
- (void)pushCssToPath:(id)path;	// 0x2f2f0d41
- (void)pushData:(id)data toPath:(id)path;	// 0x2f2f0d39
- (void)pushText:(id)text toPath:(id)path;	// 0x2f2f0d3d
- (int)resourceCount;	// 0x2f2f0fa9
// converted property getter: - (id)resourcePathPrefix;	// 0x2f2f0ff5
- (void)restartProgressiveMappingOnPath:(id)path;	// 0x2f2f0f39
- (void)setHTMLHeight:(int)height;	// 0x2f2f10a9
- (void)setHTMLWidth:(int)width;	// 0x2f2f10b9
// converted property setter: - (void)setIsThumbnail:(BOOL)thumbnail;	// 0x2f2f1065
// converted property setter: - (void)setPageCount:(unsigned)count;	// 0x2f2f1085
// converted property setter: - (void)setResourcePathPrefix:(id)prefix;	// 0x2f2f0fb9
@end

