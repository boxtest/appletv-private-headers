/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate;

@interface ATVFavorite : NSObject {
@private
	NSDate *_dateAdded;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_itemID;	// 12 = 0xc
}
@property(copy) NSDate *dateAdded;	// G=0x339afa91; S=0x339afaa5; @synthesize=_dateAdded
@property(copy) NSString *itemID;	// G=0x339afb01; S=0x339afb15; @synthesize=_itemID
@property(copy) NSString *title;	// G=0x339afac9; S=0x339afadd; @synthesize=_title
+ (id)favoriteFromDictionary:(id)dictionary;	// 0x339af755
- (id)initWithDictionary:(id)dictionary;	// 0x339af7f1
- (id)_currentDsid;	// 0x339afb39
- (id)_currentStoreFront;	// 0x339afbcd
// declared property getter: - (id)dateAdded;	// 0x339afa91
- (void)dealloc;	// 0x339af8bd
- (void)encodeWithDictionary:(id)dictionary;	// 0x339af931
- (BOOL)isSaved;	// 0x339af9d5
// declared property getter: - (id)itemID;	// 0x339afb01
- (void)remove;	// 0x339afa59
- (BOOL)removeUponAcquisition;	// 0x339af9d1
- (void)save;	// 0x339afa21
// declared property setter: - (void)setDateAdded:(id)added;	// 0x339afaa5
// declared property setter: - (void)setItemID:(id)anId;	// 0x339afb15
// declared property setter: - (void)setTitle:(id)title;	// 0x339afadd
// declared property getter: - (id)title;	// 0x339afac9
@end

