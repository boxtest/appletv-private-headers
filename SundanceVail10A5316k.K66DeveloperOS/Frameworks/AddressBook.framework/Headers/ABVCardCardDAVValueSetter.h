/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABVCardPersonValueSetter.h"


@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter {
@private
	BOOL _recordIsGroup;	// 12 = 0xc
	BOOL _importingToExistingGroup;	// 13 = 0xd
}
@property(assign) BOOL recordIsGroup;	// G=0x30a0b3d1; S=0x30a0b3e9; @synthesize=_recordIsGroup
+ (CFDictionaryRef)_personToGroupPropertyMap;	// 0x30a0ad85
+ (int)groupPropertyForPersonProperty:(int)personProperty;	// 0x30a0ae35
- (id)initWithGroup:(void *)group removeExistingProperties:(BOOL)properties;	// 0x30a0b265
- (id)initWithPerson:(void *)person removeExistingProperties:(BOOL)properties;	// 0x30a0b215
- (void)_drainExistingProperties;	// 0x30a0b111
- (void *)copyParsedRecordWithSource:(void *)source outRecordType:(unsigned *)type;	// 0x30a0aead
- (id)imageData;	// 0x30a0b37d
- (BOOL)propertyIsValidForPerson:(unsigned)person;	// 0x30a0ae61
// declared property getter: - (BOOL)recordIsGroup;	// 0x30a0b3d1
- (BOOL)setImageData:(id)data cropRectX:(int)x cropRectY:(int)y cropRectWidth:(int)width cropRectHeight:(int)height;	// 0x30a0b2c1
// declared property setter: - (void)setRecordIsGroup:(BOOL)group;	// 0x30a0b3e9
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x30a0b065
- (void *)valueForProperty:(unsigned)property;	// 0x30a0afd9
@end

