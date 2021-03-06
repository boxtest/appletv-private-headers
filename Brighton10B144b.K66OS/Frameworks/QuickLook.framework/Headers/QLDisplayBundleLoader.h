/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject {
	NSMutableDictionary *_displayBundlesById;	// 4 = 0x4
}
+ (id)sharedLoader;	// 0x32a34de5
- (id)init;	// 0x32a35035
- (void)_lookForDisplayBundles;	// 0x32a34e2d
- (id)copyDisplayBundleWithPreviewItem:(id)previewItem displayBundleIdentifier:(id)identifier;	// 0x32a3529d
- (void)dealloc;	// 0x32a350ad
- (Class)displayBundleClassForDocumentType:(id)documentType;	// 0x32a35151
- (Class)loadDisplayBundle:(id)bundle;	// 0x32a350f9
@end

