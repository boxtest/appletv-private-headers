/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ISDialogTextField : NSObject {
	int _keyboardType;	// 4 = 0x4
	BOOL _secure;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
	NSString *_value;	// 16 = 0x10
}
@property(assign) int keyboardType;	// G=0x32727875; S=0x32727885; @synthesize=_keyboardType
@property(assign, getter=isSecure) BOOL secure;	// G=0x32727895; S=0x327278a5; @synthesize=_secure
@property(retain) NSString *title;	// G=0x327278b5; S=0x327278c9; @synthesize=_title
@property(retain) NSString *value;	// G=0x327278ed; S=0x32727901; @synthesize=_value
+ (id)textFieldWithTitle:(id)title;	// 0x32727821
- (void)dealloc;	// 0x327277c9
// declared property getter: - (BOOL)isSecure;	// 0x32727895
// declared property getter: - (int)keyboardType;	// 0x32727875
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x32727885
// declared property setter: - (void)setSecure:(BOOL)secure;	// 0x327278a5
// declared property setter: - (void)setTitle:(id)title;	// 0x327278c9
// declared property setter: - (void)setValue:(id)value;	// 0x32727901
// declared property getter: - (id)title;	// 0x327278b5
// declared property getter: - (id)value;	// 0x327278ed
@end

