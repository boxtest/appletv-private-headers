/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <NSObject.h> // Unknown library


@interface UIAccessibilityLoader : NSObject {
}
+ (id)_accessibilityBundlesForBundle:(id)bundle;	// 0x32e9afa1
+ (void)_accessibilityInitializeRuntimeOverrides;	// 0x32e9b885
+ (void)_accessibilityLoadSubbundles:(id)subbundles;	// 0x32e9b769
+ (void)_accessibilityReenabled;	// 0x32e9bba1
+ (void)_accessibilityStartServer;	// 0x32e9b8b9
+ (void)_accessibilityStopServer;	// 0x32e9bbed
+ (id)_axBundleForBundle:(id)bundle;	// 0x32e9b0ed
+ (id)_loadAXBundleForBundle:(id)bundle didLoad:(BOOL *)load;	// 0x32e9b699
+ (id)_loadAXBundleForBundle:(id)bundle didLoad:(BOOL *)load forceLoad:(BOOL)load3 loadSubbundles:(BOOL)subbundles;	// 0x32e9b4d9
+ (void)initialize;	// 0x32e9ae61
+ (id)loadAccessibilityBundle:(id)bundle didLoad:(BOOL *)load;	// 0x32e9b485
+ (id)loadAccessibilityBundle:(id)bundle didLoad:(BOOL *)load force:(BOOL)force;	// 0x32e9b4a9
+ (void)loadActualAccessibilityBundle:(id)bundle didLoad:(BOOL *)load loadSubbundles:(BOOL)subbundles;	// 0x32e9b2f1
@end

