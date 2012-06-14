/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSArray, NSMutableSet;

@interface WebPluginDatabase : NSObject {
@private
	NSMutableDictionary *plugins;	// 4 = 0x4
	NSMutableSet *registeredMIMETypes;	// 8 = 0x8
	NSArray *plugInPaths;	// 12 = 0xc
	NSMutableSet *pluginInstanceViews;	// 16 = 0x10
}
@property(readonly, retain) NSMutableDictionary *plugins;	// G=0x35257d2d; converted property
+ (id)_defaultPlugInPaths;	// 0x35254bb9
+ (void)closeSharedDatabase;	// 0x352a3bf9
+ (void)setAdditionalWebPlugInPaths:(id)paths;	// 0x352a3bb9
+ (id)sharedDatabase;	// 0x35254a95
- (id)init;	// 0x35254b25
- (void)_addPlugin:(id)plugin;	// 0x35256afd
- (id)_plugInPaths;	// 0x3525525d
- (void)_removePlugin:(id)plugin;	// 0x352a3ee5
- (id)_scanForNewPlugins;	// 0x35255095
- (void)addPluginInstanceView:(id)view;	// 0x352a3999
- (void)close;	// 0x352a38e5
- (void)dealloc;	// 0x352a3c15
- (void)destroyAllPluginInstanceViews;	// 0x352a3af5
- (BOOL)isMIMETypeRegistered:(id)registered;	// 0x352a3971
- (id)pluginForExtension:(id)extension;	// 0x352a3c9d
- (id)pluginForMIMEType:(id)mimetype;	// 0x35256c51
// converted property getter: - (id)plugins;	// 0x35257d2d
- (void)refresh;	// 0x35254c81
- (void)removePluginInstanceView:(id)view;	// 0x352a39bd
- (void)removePluginInstanceViewsFor:(id)aFor;	// 0x352a39e1
- (void)setPlugInPaths:(id)paths;	// 0x35254c39
@end
