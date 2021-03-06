/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLVibrationRecorderDisplayLinkManagerTargetAction : NSObject {
	id _target;	// 4 = 0x4
	SEL _actionSelector;	// 8 = 0x8
	int _frameInterval;	// 12 = 0xc
	int _displayDidRefreshCount;	// 16 = 0x10
}
- (id)initWithTarget:(id)target actionSelector:(SEL)selector;	// 0x3159b50d
- (id)initWithTarget:(id)target actionSelector:(SEL)selector frameInterval:(int)interval;	// 0x3159b531
- (void)dealloc;	// 0x3159b5b1
- (void)displayDidRefresh:(id)display;	// 0x3159b6cd
- (unsigned)hash;	// 0x3159b681
- (BOOL)isEqual:(id)equal;	// 0x3159b5fd
@end

