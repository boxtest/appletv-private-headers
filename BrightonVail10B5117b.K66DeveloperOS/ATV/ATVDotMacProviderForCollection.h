/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoProviderForCollection.h"
#import "ATVDotMacProvider.h"

@class ATVDotMacCollection;

__attribute__((visibility("hidden")))
@interface ATVDotMacProviderForCollection : ATVDotMacProvider <BRPhotoProviderForCollection> {
	ATVDotMacCollection *_collection;	// 28 = 0x1c
	BOOL _vendPhotoDataOnly;	// 32 = 0x20
}
@property(readonly, retain) ATVDotMacCollection *collection;	// G=0x1ab271; converted property
@property(assign) BOOL vendPhotoDataOnly;	// G=0x1ab295; S=0x1ab285; converted property
+ (id)providerForCollection:(id)collection;	// 0x1aaf05
+ (id)temporaryProviderForCollection:(id)collection;	// 0x1aaf51
- (id)initWithCollection:(id)collection;	// 0x1aaf9d
- (id)initWithCollection:(id)collection isTemporaryProvider:(BOOL)provider;	// 0x1aafb1
- (id)_data;	// 0x1ab1e9
- (BOOL)_handlesObject:(id)object;	// 0x1ab229
- (BOOL)canHaveZeroData;	// 0x1ab281
// converted property getter: - (id)collection;	// 0x1ab271
- (void)dealloc;	// 0x1ab0d9
- (id)hashForDataAtIndex:(long)index;	// 0x1ab1ad
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;	// 0x1ab285
// converted property getter: - (BOOL)vendPhotoDataOnly;	// 0x1ab295
@end

