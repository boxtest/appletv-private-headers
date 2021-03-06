/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, BRControl, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVAction : NSObject {
@private
	NSDictionary *_parameters;	// 4 = 0x4
	BRControl *_control;	// 8 = 0x8
	BRMerchant *_merchant;	// 12 = 0xc
}
@property(retain) BRControl *control;	// G=0x32fe9885; S=0x32fe9899; @synthesize=_control
@property(retain) BRMerchant *merchant;	// G=0x32fe98bd; S=0x32fe98d1; @synthesize=_merchant
@property(retain) NSDictionary *parameters;	// G=0x32fe9821; S=0x32fe97dd; @synthesize=_parameters
+ (id)actionWithName:(id)name;	// 0x32fe9691
// declared property getter: - (id)control;	// 0x32fe9885
- (void)dealloc;	// 0x32fe9769
- (void)invoke;	// 0x32fe9831
// declared property getter: - (id)merchant;	// 0x32fe98bd
// declared property getter: - (id)parameters;	// 0x32fe9821
// declared property setter: - (void)setControl:(id)control;	// 0x32fe9899
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x32fe98d1
// declared property setter: - (void)setParameters:(id)parameters;	// 0x32fe97dd
@end

