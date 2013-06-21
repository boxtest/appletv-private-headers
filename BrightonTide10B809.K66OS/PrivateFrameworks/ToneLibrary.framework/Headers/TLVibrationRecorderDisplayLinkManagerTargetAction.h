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
- (id)initWithTarget:(id)target actionSelector:(SEL)selector;	// 0x35a42de1
- (id)initWithTarget:(id)target actionSelector:(SEL)selector frameInterval:(int)interval;	// 0x35a42e05
- (void)dealloc;	// 0x35a42e85
- (void)displayDidRefresh:(id)display;	// 0x35a42fa1
- (unsigned)hash;	// 0x35a42f55
- (BOOL)isEqual:(id)equal;	// 0x35a42ed1
@end
