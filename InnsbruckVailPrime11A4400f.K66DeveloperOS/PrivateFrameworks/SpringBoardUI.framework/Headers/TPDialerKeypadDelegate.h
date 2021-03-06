/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "NSObject.h"


@protocol TPDialerKeypadDelegate <NSObject>
@optional
- (void)phonePad:(id)pad appendString:(id)string;
- (void)phonePad:(id)pad dialerCharacterButtonWasHeld:(unsigned)held;
- (void)phonePad:(id)pad keyDown:(BOOL)down;
- (void)phonePad:(id)pad keyUp:(BOOL)up;
- (void)phonePad:(id)pad replaceLastDigitWithString:(id)string;
- (void)phonePadDeleteLastDigit:(id)digit;
- (void)phonePadDidEndSounds:(id)phonePad;
- (void)phonePadWillBeginSounds:(id)phonePad;
@end

