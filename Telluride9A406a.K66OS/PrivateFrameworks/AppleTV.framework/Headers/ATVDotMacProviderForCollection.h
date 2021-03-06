/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacProvider.h"
#import "BRPhotoProviderForCollection.h"

@class ATVDotMacCollection;

@interface ATVDotMacProviderForCollection : ATVDotMacProvider <BRPhotoProviderForCollection> {
@private
	ATVDotMacCollection *_collection;	// 28 = 0x1c
	BOOL _vendPhotoDataOnly;	// 32 = 0x20
}
@property(readonly, retain) ATVDotMacCollection *collection;	// G=0x32f48a85; converted property
@property(assign) BOOL vendPhotoDataOnly;	// G=0x32f48aa9; S=0x32f48a99; converted property
+ (id)providerForCollection:(id)collection;	// 0x32f4870d
+ (id)temporaryProviderForCollection:(id)collection;	// 0x32f48759
- (id)initWithCollection:(id)collection;	// 0x32f487a5
- (id)initWithCollection:(id)collection isTemporaryProvider:(BOOL)provider;	// 0x32f487b9
- (id)_data;	// 0x32f489f5
- (BOOL)_handlesObject:(id)object;	// 0x32f48a39
- (BOOL)canHaveZeroData;	// 0x32f48a95
// converted property getter: - (id)collection;	// 0x32f48a85
- (void)dealloc;	// 0x32f488e5
- (id)hashForDataAtIndex:(long)index;	// 0x32f489b9
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;	// 0x32f48a99
// converted property getter: - (BOOL)vendPhotoDataOnly;	// 0x32f48aa9
@end

