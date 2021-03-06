/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVTrackReaderInspector.h"


@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
@private
	OpaqueFigMutableComposition *_figMutableComposition;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic, getter=_mutableComposition) OpaqueFigMutableComposition *mutableComposition;	// G=0x35e791f1; 
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x35e79101
// declared property getter: - (OpaqueFigMutableComposition *)_mutableComposition;	// 0x35e791f1
- (void)dealloc;	// 0x35e79169
- (void)finalize;	// 0x35e791ad
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x35e79461
- (id)segments;	// 0x35e79201
@end

