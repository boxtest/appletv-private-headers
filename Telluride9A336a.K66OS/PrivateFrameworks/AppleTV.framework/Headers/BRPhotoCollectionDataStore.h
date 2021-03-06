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
@property(readonly, retain) BRPhotoMediaCollection *collection;	// G=0x33af214d; converted property
+ (id)dataStoreWithCollection:(id)collection;	// 0x33af1ff5
- (id)initWithPhotoCollection:(id)photoCollection;	// 0x33af2041
// converted property getter: - (id)collection;	// 0x33af214d
- (void)dealloc;	// 0x33af2101
- (id)loadData;	// 0x33af21a1
- (void)purge;	// 0x33af23e5
- (BOOL)storeAppliesToObject:(id)object;	// 0x33af215d
@end

