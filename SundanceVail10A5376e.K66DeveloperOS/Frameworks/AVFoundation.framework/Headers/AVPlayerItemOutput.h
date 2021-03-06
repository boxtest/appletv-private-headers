/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {
	AVPlayerItemOutputInternal *_outputInternal;	// 4 = 0x4
}
@property(assign, nonatomic) BOOL suppressesPlayerRendering;	// G=0x36933695; S=0x36933691; 
- (id)init;	// 0x369334b9
- (void)_attachToPlayerItem:(id)playerItem;	// 0x369336b9
- (void)_detachFromPlayerItem;	// 0x369336bd
- (void)_setTimebase:(OpaqueCMTimebase *)timebase;	// 0x369336c1
- (id)_weakReference;	// 0x36933699
- (void)dealloc;	// 0x369335bd
- (XXStruct_pwHToB)itemTimeForHostTime:(double)hostTime;	// 0x36933621
- (XXStruct_pwHToB)itemTimeForMachAbsoluteTime:(long long)machAbsoluteTime;	// 0x36933659
// declared property setter: - (void)setSuppressesPlayerRendering:(BOOL)rendering;	// 0x36933691
// declared property getter: - (BOOL)suppressesPlayerRendering;	// 0x36933695
@end

