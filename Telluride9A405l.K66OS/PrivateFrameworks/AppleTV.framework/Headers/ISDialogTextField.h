/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ISDialogTextField : NSObject {
@private
	int _keyboardType;	// 4 = 0x4
	BOOL _secure;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
	NSString *_value;	// 16 = 0x10
}
@property(assign) int keyboardType;	// G=0x35f46765; S=0x35f46775; @synthesize=_keyboardType
@property(assign, getter=isSecure) BOOL secure;	// G=0x35f46785; S=0x35f46795; @synthesize=_secure
@property(retain) NSString *title;	// G=0x35f467a5; S=0x35f467b9; @synthesize=_title
@property(retain) NSString *value;	// G=0x35f467dd; S=0x35f467f1; @synthesize=_value
+ (id)textFieldWithTitle:(id)title;	// 0x35f46711
- (void)dealloc;	// 0x35f466b9
// declared property getter: - (BOOL)isSecure;	// 0x35f46785
// declared property getter: - (int)keyboardType;	// 0x35f46765
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x35f46775
// declared property setter: - (void)setSecure:(BOOL)secure;	// 0x35f46795
// declared property setter: - (void)setTitle:(id)title;	// 0x35f467b9
// declared property setter: - (void)setValue:(id)value;	// 0x35f467f1
// declared property getter: - (id)title;	// 0x35f467a5
// declared property getter: - (id)value;	// 0x35f467dd
@end

