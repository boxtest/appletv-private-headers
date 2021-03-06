/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMetadataProvider.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreBaseMetadataProvider : XXUnknownSuperclass <BRMetadataProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	BOOL _useAlternateMetadata;	// 8 = 0x8
}
@property(assign) BOOL useAlternateMetadata;	// G=0x1dcf89; S=0x1dcf99; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1dcead
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1dcee9
- (id)controlFactory;	// 0x1dcfc5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1dcfa9
- (id)dataAtIndex:(long)index;	// 0x1dcfc9
- (long)dataCount;	// 0x1dcfad
- (void)dealloc;	// 0x1dcf3d
- (id)hashForDataAtIndex:(long)index;	// 0x1dcfdd
- (void)populateMetadataForControl:(id)control;	// 0x1dcfd9
// converted property setter: - (void)setUseAlternateMetadata:(BOOL)metadata;	// 0x1dcf99
// converted property getter: - (BOOL)useAlternateMetadata;	// 0x1dcf89
@end

