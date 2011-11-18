/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MELoader : NSObject {
	NSMutableDictionary *_exporters;	// 4 = 0x4
	NSMutableDictionary *_exporterProperties;	// 8 = 0x8
}
- (id)init;	// 0x3361b129
- (void)dealloc;	// 0x3361b16d
- (id)exporterIdentifierWithOptions:(id)options;	// 0x3361b695
- (id)exporterIdentifiers;	// 0x3361b675
- (id)exporterPropertyWithIdentifier:(id)identifier andKey:(id)key;	// 0x3361ba19
- (id)exporterWithIdentifier:(id)identifier andDocument:(id)document andDelegate:(id)delegate;	// 0x3361b9a9
- (void)loadBuiltInPlugins;	// 0x3361b281
- (void)loadEmbeddedPlugins;	// 0x3361b1cd
- (void)loadPluginAtPath:(id)path matchingIdentifier:(id)identifier;	// 0x3361b3bd
- (void)loadPluginWithIdentifier:(id)identifier;	// 0x3361b1ed
- (void)loadPluginsInFolder:(id)folder matchingIdentifier:(id)identifier;	// 0x3361b2f1
- (void)registerExporterClass:(Class)aClass withIdentifier:(id)identifier andProperties:(id)properties;	// 0x3361b529
@end

