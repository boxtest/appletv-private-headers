/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "ABVCardValueSetter.h"
#import "AddressBook-Structs.h"


@interface ABVCardPersonValueSetter : ABVCardValueSetter {
	void *_person;	// 4 = 0x4
	CFArrayRef _properties;	// 8 = 0x8
}
+ (CFArrayRef)supportedProperties;	// 0x3483ec99
- (id)initWithPerson:(void *)person;	// 0x3483ec35
- (void)dealloc;	// 0x3483cc91
- (CFArrayRef)foundProperties;	// 0x3483a415
- (id)fullName;	// 0x3483a425
- (BOOL)setImageData:(id)data;	// 0x3483f235
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x3483f18d
- (void)setValueInTemporaryCache:(id)temporaryCache forProperty:(unsigned)property;	// 0x3483d549
- (void *)valueForProperty:(unsigned)property;	// 0x3483f20d
@end

