/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class NSMutableArray, UIPDFPageView;

@interface UIPDFPlacementController : NSObject {
	NSMutableArray *_popups;	// 4 = 0x4
	CGSize _viewSize;	// 8 = 0x8
	UIPDFPageView *pageView;	// 16 = 0x10
}
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x32273019; S=0x32273029; @synthesize
- (id)initWithAnnotations:(id)annotations viewSize:(CGSize)size;	// 0x322724a5
- (CGRect)boundsForObjectAtIndex:(unsigned)index;	// 0x32272685
- (void)dealloc;	// 0x32272625
- (void)layoutViews:(float)views;	// 0x322729dd
// declared property getter: - (id)pageView;	// 0x32273019
// declared property setter: - (void)setPageView:(id)view;	// 0x32273029
- (void)shift:(float)shift;	// 0x32272901
- (id)viewAtIndex:(unsigned)index;	// 0x322728c9
- (float)yForObjectAtIndex:(unsigned)index;	// 0x32272891
@end

