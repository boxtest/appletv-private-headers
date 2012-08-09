/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <BBBulletin.h> // Unknown library


@interface BBBulletin (SBUIUtilities)
+ (void)killSounds;	// 0x35709a8d
- (id)actionBlockForButton:(id)button;	// 0x35709ef9
- (id)actionBlockForButton:(id)button withOrigin:(int)origin;	// 0x35709e7d
- (id)defaultActionBlock;	// 0x35709ee5
- (id)defaultActionBlockWithOrigin:(int)origin;	// 0x35709df5
- (id)defaultActionBlockWithOrigin:(int)origin canBypassPinLock:(BOOL *)lock requiresUnlock:(BOOL *)unlock suitabilityFilter:(id)filter;	// 0x35709b39
- (void)killSound;	// 0x35709afd
- (BOOL)playSound;	// 0x35709ac5
@end
