/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRGestureRecognizer.h"

@class NSString;

@interface MRPanZoomRotationGestureRecognizer : MRGestureRecognizer {
	NSString *_type;	// 148 = 0x94
	float _factor;	// 152 = 0x98
	int _direction;	// 156 = 0x9c
	BOOL _isMaster;	// 160 = 0xa0
}
@property(readonly, assign) int direction;	// G=0x33b14fc1; @synthesize=_direction
- (id)initWithRenderer:(id)renderer masterAction:(id)action direction:(int)direction andSender:(id)sender;	// 0x33b139c9
- (id)initWithRenderer:(id)renderer startAction:(id)action direction:(int)direction andSender:(id)sender;	// 0x33b13981
- (void)_addSpecificObjectToAction:(id)action;	// 0x33b1493d
- (void)_postProcess;	// 0x33b14df5
- (void)dealloc;	// 0x33b140a9
// declared property getter: - (int)direction;	// 0x33b14fc1
- (void)touchEnded:(id)ended;	// 0x33b145dd
- (void)touchMoved:(id)moved;	// 0x33b140f9
@end
