/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTAccount.h"
#import "BRUserPasswordAccount.h"


__attribute__((visibility("hidden")))
@interface RUIYTUserPasswordAccount : BRUserPasswordAccount <RUIYTAccount> {
}
@property(assign) BOOL ytAllowsInappropriate;	// G=0x268e59; S=0x268e9d; 
+ (int)_currentVersion;	// 0x268d95
- (id)initWithCoder:(id)coder;	// 0x268d99
- (id)_keychainAccessGroup;	// 0x268f0d
// declared property setter: - (void)setYtAllowsInappropriate:(BOOL)inappropriate;	// 0x268e9d
- (id)type;	// 0x268ef1
// declared property getter: - (BOOL)ytAllowsInappropriate;	// 0x268e59
@end

