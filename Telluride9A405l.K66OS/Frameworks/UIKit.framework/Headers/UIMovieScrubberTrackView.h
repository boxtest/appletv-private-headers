/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableDictionary, UIMovieScrubberTrackOverlayView, NSDictionary, NSArray;
@protocol UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberTrackView : UIView {
@private
	id<UIMovieScrubberTrackViewDataSource> _dataSource;	// 48 = 0x30
	id<UIMovieScrubberTrackViewDelegate> _delegate;	// 52 = 0x34
	NSArray *_summaryThumbnailViews;	// 56 = 0x38
	NSArray *_summaryThumbnailTimestamps;	// 60 = 0x3c
	NSArray *_summaryThumbnailChildTimestamps;	// 64 = 0x40
	NSDictionary *_thumbnailStartXValues;	// 68 = 0x44
	NSDictionary *_childThumbnailViews;	// 72 = 0x48
	NSMutableDictionary *_thumbnailViews;	// 76 = 0x4c
	NSArray *_timestamps;	// 80 = 0x50
	UIMovieScrubberTrackOverlayView *_overlayView;	// 84 = 0x54
	UIView *_maskView;	// 88 = 0x58
	UIView *_maskContainerView;	// 92 = 0x5c
	CGSize _thumbnailSize;	// 96 = 0x60
	float _zoomOriginXDelta;	// 104 = 0x68
	float _zoomWidthDelta;	// 108 = 0x6c
	float _unclampedZoomWidthDelta;	// 112 = 0x70
	float _zoomAnimationDuration;	// 116 = 0x74
	double _duration;	// 120 = 0x78
	double _value;	// 128 = 0x80
	double _startValue;	// 136 = 0x88
	double _endValue;	// 144 = 0x90
	struct {
		unsigned delegateSizeOriginDelta : 1;
		unsigned delegateDidExpand : 1;
		unsigned delegateDidCollapse : 1;
		unsigned delegateWillRequestThumbs : 1;
		unsigned delegateDidRequestThumbs : 1;
		unsigned delegateZoomAnimationDuration : 1;
		unsigned delegateZoomAnimationDelay : 1;
		unsigned needsReload : 1;
		unsigned editing : 1;
		unsigned editingHandle;
		unsigned zoomIsDisabled : 1;
	} _trackFlags;	// 152 = 0x98
}
@property(assign, nonatomic) id<UIMovieScrubberTrackViewDataSource> dataSource;	// G=0x32f0fe3d; S=0x32f0fe11; 
@property(assign, nonatomic) id<UIMovieScrubberTrackViewDelegate> delegate;	// G=0x32f0ff69; S=0x32f0fe4d; 
@property(assign) float zoomAnimationDuration;	// G=0x32f10ee1; S=0x32f10ed1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x32f0f92d
- (id)_createImageViewForTimestamp:(id)timestamp;	// 0x32f1056d
- (void)_reallyReloadData;	// 0x32f107b9
- (void)_setOverlayViewIsZoomed:(BOOL)zoomed minValue:(float)value maxValue:(float)value3;	// 0x32f11d19
- (void)_unzoomAnimation:(id)animation didFinish:(id)finish context:(void *)context;	// 0x32f121b1
- (void)_zoomAnimation:(id)animation didFinish:(id)finish context:(void *)context;	// 0x32f12175
- (void)animateFillFramesAway;	// 0x32f10069
- (void)clear;	// 0x32f106e5
// declared property getter: - (id)dataSource;	// 0x32f0fe3d
- (void)dealloc;	// 0x32f0fbbd
// declared property getter: - (id)delegate;	// 0x32f0ff69
- (void)drawRect:(CGRect)rect;	// 0x32f0fcbd
- (void)layoutSubviews;	// 0x32f10e7d
- (void)reloadData;	// 0x32f10e59
// declared property setter: - (void)setDataSource:(id)source;	// 0x32f0fe11
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32f0fe4d
- (void)setEditing:(BOOL)editing;	// 0x32f0ffe5
- (void)setEndValue:(double)value;	// 0x32f10129
- (void)setFrame:(CGRect)frame;	// 0x32f0fd5d
- (void)setStartValue:(double)value;	// 0x32f1009d
- (void)setThumbnailImage:(CGImageRef)image forTimestamp:(id)timestamp;	// 0x32f101b5
- (void)setValue:(double)value;	// 0x32f0ff79
// converted property setter: - (void)setZoomAnimationDuration:(float)duration;	// 0x32f10ed1
- (void)unzoom;	// 0x32f11ec1
// converted property getter: - (float)zoomAnimationDuration;	// 0x32f10ee1
- (BOOL)zoomAtPoint:(CGPoint)point;	// 0x32f10ef1
@end

