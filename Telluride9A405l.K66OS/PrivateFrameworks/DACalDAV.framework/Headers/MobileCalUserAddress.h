/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSURL, MobileCalDAVAccount;

@interface MobileCalUserAddress : NSObject {
	MobileCalDAVAccount *_account;	// 4 = 0x4
	NSURL *_address;	// 8 = 0x8
}
@property(retain) MobileCalDAVAccount *account;	// G=0x3022b2c5; S=0x3022b2fd; converted property
@property(readonly, retain) NSURL *address;	// G=0x3022b30d; converted property
+ (id)userAddress:(id)address forAccount:(id)account;	// 0x3022b279
+ (id)userAddressFromDictionaryRepresentation:(id)dictionaryRepresentation forAccount:(id)account;	// 0x3022b415
- (id)initWithAddress:(id)address account:(id)account;	// 0x3022b1a9
- (void)_setAddress:(id)address;	// 0x3022b345
// converted property getter: - (id)account;	// 0x3022b2c5
// converted property getter: - (id)address;	// 0x3022b30d
- (void)dealloc;	// 0x3022b20d
- (id)description;	// 0x3022b259
- (id)dictionaryRepresentation;	// 0x3022b389
// converted property setter: - (void)setAccount:(id)account;	// 0x3022b2fd
@end

