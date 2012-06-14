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
@property(copy) NSDate *dateAdded;	// G=0x365c4cfd; S=0x365c4d11; @synthesize=_dateAdded
@property(copy) NSString *itemID;	// G=0x365c4d6d; S=0x365c4d81; @synthesize=_itemID
@property(copy) NSString *title;	// G=0x365c4d35; S=0x365c4d49; @synthesize=_title
+ (id)favoriteFromDictionary:(id)dictionary;	// 0x365c49bd
- (id)initWithDictionary:(id)dictionary;	// 0x365c4a5d
- (id)_currentDsid;	// 0x365c4da5
- (id)_currentStoreFront;	// 0x365c4e39
// declared property getter: - (id)dateAdded;	// 0x365c4cfd
- (void)dealloc;	// 0x365c4b29
- (void)encodeWithDictionary:(id)dictionary;	// 0x365c4b9d
- (BOOL)isSaved;	// 0x365c4c41
// declared property getter: - (id)itemID;	// 0x365c4d6d
- (void)remove;	// 0x365c4cc5
- (BOOL)removeUponAcquisition;	// 0x365c4c3d
- (void)save;	// 0x365c4c8d
// declared property setter: - (void)setDateAdded:(id)added;	// 0x365c4d11
// declared property setter: - (void)setItemID:(id)anId;	// 0x365c4d81
// declared property setter: - (void)setTitle:(id)title;	// 0x365c4d49
// declared property getter: - (id)title;	// 0x365c4d35
@end
