/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataStore.h"

@class BRPhotoMediaCollection;

@interface BRPhotoCollectionDataStore : BRDataStore {
@private
	BRPhotoMediaCollection *_collection;	// 40 = 0x28
	BOOL _clearCollection;	// 44 = 0x2c
}
@property(readonly, retain) BRPhotoMediaCollection *collection;	// G=0x35e5ff81; converted property
+ (id)dataStoreWithCollection:(id)collection;	// 0x35e5fe29
- (id)initWithPhotoCollection:(id)photoCollection;	// 0x35e5fe75
// converted property getter: - (id)collection;	// 0x35e5ff81
- (void)dealloc;	// 0x35e5ff35
- (id)loadData;	// 0x35e5ffd5
- (void)purge;	// 0x35e60219
- (BOOL)storeAppliesToObject:(id)object;	// 0x35e5ff91
@end

