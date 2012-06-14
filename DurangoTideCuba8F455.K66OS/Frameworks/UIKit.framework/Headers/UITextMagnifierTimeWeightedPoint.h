/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UITextMagnifierTimeWeightedPoint : NSObject {
@private
	int m_index;	// 4 = 0x4
	struct {
		CGPoint point;
		double time;
	} m_points[16];	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CGPoint weightedPoint;	// G=0x302ccedd; 
- (void)addPoint:(CGPoint)point;	// 0x302ccdfd
- (void)clearHistory;	// 0x302ccce5
- (CGSize)displacementInInterval:(double)interval;	// 0x302cce95
- (CGSize)displacementInInterval:(double)interval priorTo:(double)to;	// 0x302cd0e1
- (float)distanceCoveredInInterval:(double)interval;	// 0x302cce5d
- (float)distanceCoveredInInterval:(double)interval priorTo:(double)to;	// 0x302ccfc5
- (BOOL)historyCovers:(double)covers;	// 0x302ccd35
// declared property getter: - (CGPoint)weightedPoint;	// 0x302ccedd
@end
