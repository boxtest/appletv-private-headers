/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "_UIScrollToTopView.h"
#import "UIView.h"

@class UIImageView, NSArray, UIPinchGestureRecognizer, NSISVariable, UIPanGestureRecognizer;
@protocol UIScrollViewDelegate;

@interface UIScrollView : UIView <_UIScrollToTopView, NSCoding> {
	CGSize _contentSize;	// 84 = 0x54
	UIEdgeInsets _contentInset;	// 92 = 0x5c
	id _delegate;	// 108 = 0x6c
	UIImageView *_verticalScrollIndicator;	// 112 = 0x70
	UIImageView *_horizontalScrollIndicator;	// 116 = 0x74
	UIEdgeInsets _scrollIndicatorInset;	// 120 = 0x78
	struct {
		unsigned tracking : 1;
		unsigned dragging : 1;
		unsigned verticalBounceEnabled : 1;
		unsigned horizontalBounceEnabled : 1;
		unsigned verticalBouncing : 1;
		unsigned horizontalBouncing : 1;
		unsigned bouncesZoom : 1;
		unsigned zoomBouncing : 1;
		unsigned alwaysBounceHorizontal : 1;
		unsigned alwaysBounceVertical : 1;
		unsigned preventScrollingContainer : 1;
		unsigned canCancelContentTouches : 1;
		unsigned delaysContentTouches : 1;
		unsigned programmaticScrollDisabled : 1;
		unsigned scrollDisabled : 1;
		unsigned zoomDisabled : 1;
		unsigned scrollTriggered : 1;
		unsigned scrollDisabledOnTouchBegan : 1;
		unsigned ignoreNextTouchesMoved : 1;
		unsigned cancelNextContentTouchEnded : 1;
		unsigned inContentViewCall : 1;
		unsigned dontSelect : 1;
		unsigned contentTouched : 1;
		unsigned cantCancel : 1;
		unsigned directionalLockEnabled : 1;
		unsigned directionalLockAutoEnabled : 1;
		unsigned lockVertical : 1;
		unsigned lockHorizontal : 1;
		unsigned keepLocked : 1;
		unsigned showsHorizontalScrollIndicator : 1;
		unsigned showsVerticalScrollIndicator : 1;
		unsigned indicatorStyle : 2;
		unsigned inZoom : 1;
		unsigned hideIndicatorsInZoom : 1;
		unsigned pushedTrackingMode : 1;
		unsigned multipleDrag : 1;
		unsigned displayingScrollIndicators : 1;
		unsigned verticalIndicatorShrunk : 1;
		unsigned horizontalIndicatorShrunk : 1;
		unsigned contentFitDisableScrolling : 1;
		unsigned pagingEnabled : 1;
		unsigned pagingLeft : 1;
		unsigned pagingRight : 1;
		unsigned pagingUp : 1;
		unsigned pagingDown : 1;
		unsigned lastHorizontalDirection : 1;
		unsigned lastVerticalDirection : 1;
		unsigned dontScrollToTop : 1;
		unsigned scrollingToTop : 1;
		unsigned useGestureRecognizers : 1;
		unsigned singleFingerPan : 1;
		unsigned autoscrolling : 1;
		unsigned automaticContentOffsetAdjustmentDisabled : 1;
		unsigned skipStartOffsetAdjustment : 1;
		unsigned delegateScrollViewDidScroll : 1;
		unsigned delegateScrollViewDidZoom : 1;
		unsigned delegateContentSizeForZoomScale : 1;
		unsigned preserveCenterDuringRotation : 1;
		unsigned delaysTrackingWhileDecelerating : 1;
		unsigned pinnedZoomMin : 1;
		unsigned pinnedXMin : 1;
		unsigned pinnedYMin : 1;
		unsigned pinnedXMax : 1;
		unsigned pinnedYMax : 1;
		unsigned skipLinkChecks : 1;
		unsigned staysCenteredDuringPinch : 1;
		unsigned wasDelayingPinchForSystemGestures : 1;
		unsigned systemGesturesRecognitionPossible : 1;
		unsigned disableContentOffsetRounding : 1;
		unsigned adjustedDecelerationTargetX : 1;
		unsigned adjustedDecelerationTargetY : 1;
		unsigned hasScrolled : 1;
		unsigned wantsConstrainedContentSize : 1;
	} _scrollViewFlags;	// 136 = 0x88
	float _farthestDistance;	// 148 = 0x94
	CGPoint _initialTouchPosition;	// 152 = 0x98
	CGPoint _startTouchPosition;	// 160 = 0xa0
	double _startTouchTime;	// 168 = 0xa8
	double _startOffsetX;	// 176 = 0xb0
	double _startOffsetY;	// 184 = 0xb8
	double _lastUpdateOffsetX;	// 192 = 0xc0
	double _lastUpdateOffsetY;	// 200 = 0xc8
	CGPoint _lastTouchPosition;	// 208 = 0xd0
	double _lastTouchTime;	// 216 = 0xd8
	double _lastUpdateTime;	// 224 = 0xe0
	UIView *_contentView;	// 232 = 0xe8
	float _minimumZoomScale;	// 236 = 0xec
	float _maximumZoomScale;	// 240 = 0xf0
	UIView *_zoomView;	// 244 = 0xf4
	double _horizontalVelocity;	// 248 = 0xf8
	double _verticalVelocity;	// 256 = 0x100
	double _previousHorizontalVelocity;	// 264 = 0x108
	double _previousVerticalVelocity;	// 272 = 0x110
	id _scrollHeartbeat;	// 280 = 0x118
	CGPoint _pageDecelerationTarget;	// 284 = 0x11c
	CGSize _decelerationFactor;	// 292 = 0x124
	CGPoint _adjustedDecelerationTarget;	// 300 = 0x12c
	CGSize _adjustedDecelerationFactor;	// 308 = 0x134
	double _decelerationLnFactorH;	// 316 = 0x13c
	double _decelerationLnFactorV;	// 324 = 0x144
	NSArray *_deferredBeginTouchesInfo;	// 332 = 0x14c
	id *_shadows;	// 336 = 0x150
	id _scrollNotificationViews;	// 340 = 0x154
	double _contentOffsetAnimationDuration;	// 344 = 0x158
	id _animation;	// 352 = 0x160
	id _zoomAnimation;	// 356 = 0x164
	id _pinch;	// 360 = 0x168
	id _pan;	// 364 = 0x16c
	id _swipe;	// 368 = 0x170
	float _pagingSpringPull;	// 372 = 0x174
	float _pagingFriction;	// 376 = 0x178
	int _fastScrollCount;	// 380 = 0x17c
	float _fastScrollMultiplier;	// 384 = 0x180
	float _fastScrollStartMultiplier;	// 388 = 0x184
	double _fastScrollEndTime;	// 392 = 0x188
	CGPoint _parentAdjustment;	// 400 = 0x190
	CGPoint _rotationCenterPoint;	// 408 = 0x198
	float _accuracy;	// 416 = 0x1a0
	float _hysteresis;	// 420 = 0x1a4
	unsigned _zoomAnimationCount;	// 424 = 0x1a8
	CADoublePoint _zoomAnchorPoint;	// 428 = 0x1ac
	id _scrollTestParameters;	// 444 = 0x1bc
	NSISVariable *_contentWidthVariable;	// 448 = 0x1c0
	NSISVariable *_contentHeightVariable;	// 452 = 0x1c4
	BOOL _useContentDimensionVariablesForConstraintLowering;	// 456 = 0x1c8
	NSArray *_automaticContentConstraints;	// 460 = 0x1cc
}
@property(copy, nonatomic, setter=_setAutomaticContentConstraints:) NSArray *_automaticContentConstraints;	// G=0x32ccfae5; S=0x32cce7c5; @synthesize
@property(readonly, assign, nonatomic) NSISVariable *_contentHeightVariable;	// G=0x32ccfab5; @synthesize
@property(readonly, assign, nonatomic) NSISVariable *_contentWidthVariable;	// G=0x32ccfaa5; @synthesize
@property(assign, nonatomic, setter=_setUseContentDimensionVariablesForConstraintLowering:) BOOL _useContentDimensionVariablesForConstraintLowering;	// G=0x32ccfac5; S=0x32ccfad5; @synthesize
@property(assign) BOOL allowsMultipleFingers;	// G=0x32ccd135; S=0x32ccd0d1; converted property
@property(assign, nonatomic) BOOL alwaysBounceHorizontal;	// G=0x32b04a8d; S=0x32c6f7f5; 
@property(assign, nonatomic) BOOL alwaysBounceVertical;	// G=0x32b04bc1; S=0x32b97171; 
@property(assign) CGPoint autoscrollContentOffset;	// G=0x32cd0d95; S=0x32cd0db5; converted property
@property(assign, nonatomic) BOOL bounces;	// G=0x32cccedd; S=0x32bb7e29; 
@property(assign) BOOL bouncesHorizontally;	// G=0x32cccf11; S=0x32cccef9; converted property
@property(assign) BOOL bouncesVertically;	// G=0x32cccf3d; S=0x32cccf25; converted property
@property(assign, nonatomic) BOOL bouncesZoom;	// G=0x32cce3f1; S=0x32b97155; 
@property(assign, nonatomic) BOOL canCancelContentTouches;	// G=0x32cce405; S=0x32cce419; 
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x32b04441; S=0x32b4f381; @synthesize=_contentInset
@property(assign, nonatomic) CGPoint contentOffset;	// G=0x32b041dd; S=0x32b045d9; 
@property(assign, nonatomic) CGSize contentSize;	// G=0x32b14af9; S=0x32b039d1; @synthesize=_contentSize
@property(readonly, assign, nonatomic, getter=isDecelerating) BOOL decelerating;	// G=0x32b5de79; 
@property(assign, nonatomic) float decelerationRate;	// G=0x32ccd07d; S=0x32bb7ead; 
@property(assign, nonatomic) BOOL delaysContentTouches;	// G=0x32bfdcd1; S=0x32b9626d; 
@property(assign, nonatomic) id<UIScrollViewDelegate> delegate;	// G=0x32b183e5; S=0x32b4ed01; @synthesize=_delegate
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x32cccde5; S=0x32b9622d; 
@property(readonly, assign, nonatomic, getter=isDragging) BOOL dragging;	// G=0x32b5de91; 
@property(assign) float horizontalScrollDecelerationFactor;	// G=0x32ccd0a9; S=0x32b96201; converted property
@property(assign, nonatomic) int indicatorStyle;	// G=0x32ccd08d; S=0x32cccfb9; 
@property(readonly, assign, nonatomic, getter=_isAnimatingScroll) BOOL isAnimatingScroll;	// G=0x32b1b1e9; 
@property(readonly, assign, nonatomic, getter=_isAnimatingZoom) BOOL isAnimatingZoom;	// G=0x32c29261; 
@property(readonly, assign, nonatomic, getter=_isHorizontalBouncing) BOOL isHorizontalBouncing;	// G=0x32c73619; 
@property(readonly, assign, nonatomic, getter=_isVerticalBouncing) BOOL isVerticalBouncing;	// G=0x32cccf7d; 
@property(assign, nonatomic) float maximumZoomScale;	// G=0x32cccd1d; S=0x32b9b4a5; @synthesize=_maximumZoomScale
@property(assign, nonatomic) float minimumZoomScale;	// G=0x32c7604d; S=0x32b9b46d; 
@property(assign) CGPoint offset;	// G=0x32b9f431; S=0x32ccfaf9; converted property
@property(assign, nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;	// G=0x32bcb405; S=0x32bb7e65; 
@property(readonly, assign, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;	// G=0x32b70d15; @synthesize=_pan
@property(readonly, assign, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;	// G=0x32ccfa85; @synthesize=_pinch
@property(assign) BOOL preservesCenterDuringRotation;	// G=0x32ccd1bd; S=0x32c71035; converted property
@property(assign, nonatomic, getter=isProgrammaticScrollEnabled) BOOL programmaticScrollEnabled;	// G=0x32ccce45; S=0x32c46875; 
@property(assign, nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;	// G=0x32bd40a9; S=0x32bb7ef1; 
@property(assign, nonatomic) UIEdgeInsets scrollIndicatorInsets;	// G=0x32b9820d; S=0x32b52019; 
@property(retain, nonatomic) id scrollTestParameters;	// G=0x32ccfa95; S=0x32c292ed; @synthesize=_scrollTestParameters
@property(assign, nonatomic) BOOL scrollsToTop;	// G=0x32cce4b9; S=0x32b4f2fd; 
@property(assign, nonatomic) BOOL showsHorizontalScrollIndicator;	// G=0x32cccf91; S=0x32b038cd; 
@property(assign, nonatomic) BOOL showsVerticalScrollIndicator;	// G=0x32cccfa5; S=0x32b03951; 
@property(readonly, assign, nonatomic, getter=isTracking) BOOL tracking;	// G=0x32b045c5; 
@property(assign) BOOL tracksImmediatelyWhileDecelerating;	// G=0x32c20f41; S=0x32ccd151; converted property
@property(assign) BOOL usesGestureRecognizers;	// G=0x32b4ca71; S=0x32b4ca8d; converted property
@property(assign) float verticalScrollDecelerationFactor;	// G=0x32ccd0b9; S=0x32b96215; converted property
@property(assign, nonatomic, getter=_zoomAnchorPoint, setter=_setZoomAnchorPoint:) CADoublePoint zoomAnchorPoint;	// G=0x32c72061; S=0x32c71435; @synthesize=_zoomAnchorPoint
@property(readonly, assign, nonatomic, getter=isZoomBouncing) BOOL zoomBouncing;	// G=0x32ccf9cd; 
@property(assign, getter=isZoomEnabled) BOOL zoomEnabled;	// G=0x32ccce2d; S=0x32b9b7a9; converted property
@property(assign, nonatomic) float zoomScale;	// G=0x32b97f99; S=0x32c7117d; 
@property(readonly, assign, nonatomic, getter=isZooming) BOOL zooming;	// G=0x32c7141d; 
+ (float)_cancelSelectDistance;	// 0x32c8cb91
+ (SEL)_panGestureAction;	// 0x32b4cf29
+ (SEL)_pinchGestureAction;	// 0x32b9b4e1
+ (void)_scrollWithNSTimer:(BOOL)nstimer;	// 0x32ccc1d9
- (id)initWithCoder:(id)coder;	// 0x32c84eb9
- (id)initWithFrame:(CGRect)frame;	// 0x32b4c259
- (int)_abuttedEdgesForContentOffset:(CGPoint)contentOffset;	// 0x32c9088d
- (int)_abuttedPagingEdges;	// 0x32ccce61
- (void)_addClassSpecificConstraints;	// 0x32cce68d
- (void)_addContentSubview:(id)subview atBack:(BOOL)back;	// 0x32b01ab9
- (void)_addScrollNotificationView:(id)view;	// 0x32b6c071
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)contentSizeForcedVisible;	// 0x32b9678d
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)contentSizeForcedVisible withOffset:(float)offset;	// 0x32b967c9
- (void)_adjustContentOffsetIfNecessary;	// 0x32b03be1
- (void)_adjustContentSizeForView:(id)view atScale:(float)scale;	// 0x32c71fb1
- (void)_adjustForAutomaticKeyboardInfo:(id)automaticKeyboardInfo animated:(BOOL)animated lastAdjustment:(float *)adjustment;	// 0x32bafd69
- (void)_adjustScrollerIndicators:(BOOL)indicators alwaysShowingThem:(BOOL)them;	// 0x32b508f9
- (void)_adjustShadowsIfNecessary;	// 0x32b04949
- (void)_adjustShadowsIfNecessaryForOffset:(float)offset;	// 0x32cd0e91
- (void)_adjustStartOffsetForGrabbedBouncingScrollView;	// 0x32c20f61
- (float)_adjustedHorizontalOffsetPinnedToScrollableBounds:(float)scrollableBounds;	// 0x32ccc7bd
- (float)_adjustedVerticalOffsetPinnedToScrollableBounds:(float)scrollableBounds;	// 0x32ccca11
- (CGPoint)_animatedOriginalOffset;	// 0x32cd0c39
- (CGPoint)_animatedTargetOffset;	// 0x32cd0c91
// declared property getter: - (id)_automaticContentConstraints;	// 0x32ccfae5
- (id)_backgroundShadowForSlideAnimation;	// 0x32cd0ec1
- (void)_beginTouchesInContentView:(id)contentView touches:(id)touches withEvent:(id)event;	// 0x32cd085d
- (BOOL)_beginTrackingWithEvent:(id)event;	// 0x32bfb931
- (BOOL)_canCancelContentTouches:(id)touches;	// 0x32c1e061
- (BOOL)_canScrollX;	// 0x32b04975
- (BOOL)_canScrollY;	// 0x32b04aa5
- (BOOL)_cancelContentTouchWithEvent:(id)event forced:(BOOL)forced;	// 0x32c8bf1d
- (void)_centerContentIfNecessary;	// 0x32b5a50d
- (void)_changedGesture:(id)gesture withEvent:(id)event;	// 0x32ccfbcd
- (void)_clearContentOffsetAnimation;	// 0x32c504b9
- (void)_clearContentOffsetAnimation:(id)animation;	// 0x32c4fc01
- (void)_clearParentAdjustment;	// 0x32cd00cd
- (BOOL)_constraintAffectsContentSize:(id)size;	// 0x32cced25
- (id)_constraintsFromContentSize;	// 0x32cce949
// declared property getter: - (id)_contentHeightVariable;	// 0x32ccfab5
- (double)_contentOffsetAnimationDuration;	// 0x32c41651
// declared property getter: - (id)_contentWidthVariable;	// 0x32ccfaa5
- (BOOL)_continueScrollingAtOffset:(CGPoint)offset;	// 0x32cd230d
- (int)_currentlyAbuttedContentEdges;	// 0x32c90841
- (id)_defaultHitTest:(CGPoint)test withEvent:(id)event;	// 0x32c2463d
- (float)_defaultPagingFriction;	// 0x32cce629
- (void)_deferredBeginTouchesInContentView;	// 0x32cd23c9
- (void)_delegateScrollViewAnimationEnded;	// 0x32c4fb29
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32b594d5
- (void)_endGesture:(id)gesture withEvent:(id)event;	// 0x32ccfee5
- (void)_endPanWithEvent:(id)event;	// 0x32c043e9
- (void)_forceDelegateScrollViewDidZoom:(BOOL)_forceDelegateScrollView;	// 0x32cd0809
- (void)_forgetDependentConstraint:(id)constraint;	// 0x32ccee79
- (BOOL)_gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x32bfb8bd
- (BOOL)_gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x32bffbbd
- (void)_gestureRecognizerFailed:(id)failed;	// 0x32c03739
- (id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;	// 0x32ccd235
- (BOOL)_getBouncingDecelerationOffset:(double *)offset forTimeInterval:(double)timeInterval lastUpdateOffset:(double)offset3 min:(double)min max:(double)max decelerationFactor:(double)factor decelerationLnFactor:(double)factor7 velocity:(double *)velocity;	// 0x32c20af9
- (id)_getDelegateZoomView;	// 0x32b98069
- (BOOL)_getPagingDecelerationOffset:(CADoublePoint *)offset forTimeInterval:(double)timeInterval;	// 0x32c73791
- (void)_getStandardDecelerationOffset:(double *)offset forTimeInterval:(double)timeInterval min:(double)min max:(double)max decelerationFactor:(double)factor decelerationLnFactor:(double)factor6 velocity:(double *)velocity;	// 0x32cd13a9
- (void)_handleSwipe:(id)swipe;	// 0x32cce321
- (void)_hideScrollIndicators;	// 0x32b662d5
- (id)_hitTestForContentView:(CGPoint)contentView withEvent:(id)event;	// 0x32cd0825
- (double)_horizontalVelocity;	// 0x32c3bf31
- (BOOL)_ignoreLinkedOnChecks;	// 0x32cce5d9
- (void)_incrementForScrollTest;	// 0x32cd2b5d
// declared property getter: - (BOOL)_isAnimatingScroll;	// 0x32b1b1e9
// declared property getter: - (BOOL)_isAnimatingZoom;	// 0x32c29261
- (BOOL)_isAutoscrolling;	// 0x32cd0d7d
- (BOOL)_isBouncing;	// 0x32bfcc79
// declared property getter: - (BOOL)_isHorizontalBouncing;	// 0x32c73619
- (BOOL)_isRectFullyVisible:(CGRect)visible;	// 0x32cccc69
- (BOOL)_isScrollingEnabled;	// 0x32ca8389
// declared property getter: - (BOOL)_isVerticalBouncing;	// 0x32cccf7d
- (id)_layoutVariableWithAmbiguousValue;	// 0x32ccef91
- (void)_markScrollViewAnimationForKey:(id)key ofView:(id)view;	// 0x32c75565
- (void)_moveContentSubview:(id)subview toBack:(BOOL)back;	// 0x32b84315
- (void)_notifyDidScroll;	// 0x32b5087d
- (CGSize)_nsis_contentSize;	// 0x32ccebc1
- (float)_offsetForRubberBandOffset:(float)rubberBandOffset maxOffset:(float)offset minOffset:(float)offset3 range:(float)range;	// 0x32c22151
- (CGPoint)_originalOffsetForAnimatedSetContentOffset;	// 0x32c4ebf1
- (BOOL)_ownsAnimationForKey:(id)key ofView:(id)view;	// 0x32c2927d
- (CGPoint)_pageDecelerationTarget;	// 0x32cd1391
- (float)_pagingFriction;	// 0x32cce5f1
- (BOOL)_pagingLeft;	// 0x32c72c45
- (BOOL)_pagingRight;	// 0x32c72c5d
- (id)_panGestureRecognizer;	// 0x32c90831
- (id)_parentScrollView;	// 0x32bfd0ed
- (void)_performScrollTest:(id)test iterations:(int)iterations delta:(int)delta;	// 0x32cd27fd
- (void)_performScrollTest:(id)test iterations:(int)iterations delta:(int)delta length:(int)length;	// 0x32cd2861
- (void)_pinContentOffsetToClosestPageBoundary;	// 0x32cd1005
- (void)_popTrackingRunLoopMode;	// 0x32c21e79
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32ccc1fd
- (void)_prepareToPageWithHorizontalVelocity:(float)horizontalVelocity verticalVelocity:(float)velocity;	// 0x32c03cf1
- (CGRect)_rectForPageContainingView:(id)pageContainingView;	// 0x32cd1085
- (void)_registerAsScrollToTopViewIfPossible;	// 0x32cce4d5
- (void)_registerForRotation:(BOOL)rotation ofWindow:(id)window;	// 0x32c71089
- (void)_rememberDependentConstraint:(id)constraint;	// 0x32ccedfd
- (void)_removeScrollNotificationView:(id)view;	// 0x32c147c5
- (BOOL)_resetScrollingForGestureEvent:(id)gestureEvent;	// 0x32cd0711
- (void)_resetScrollingWithEvent:(GSEventRef)event;	// 0x32cd05d1
- (void)_resetScrollingWithUIEvent:(id)uievent;	// 0x32bfbf39
- (void)_resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x32ccec8d
- (CADoublePoint)_rubberBandContentOffsetForOffset:(CADoublePoint)offset outsideX:(BOOL *)x outsideY:(BOOL *)y;	// 0x32c1f3f9
- (float)_rubberBandOffsetForOffset:(float)offset maxOffset:(float)offset2 minOffset:(float)offset3 range:(float)range outside:(BOOL *)outside;	// 0x32c1ffa1
- (void)_runLoopModePopped:(id)popped;	// 0x32cd2315
- (float)_scrollHysteresis;	// 0x32ccd17d
- (id)_scrollTestExtraResults;	// 0x32cd2a95
- (void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)screenLocation resultHandler:(id)handler;	// 0x32ca9a71
- (void)_scrollViewAnimationEnded:(id)ended finished:(BOOL)finished;	// 0x32c4fa61
- (void)_scrollViewDidEndDecelerating;	// 0x32c21fb1
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x32c20691
- (void)_scrollViewDidEndZooming;	// 0x32c75801
- (id)_scrollViewTouchDelayGesture;	// 0x32bb7f8d
- (void)_scrollViewWillBeginDragging;	// 0x32c1f2b1
- (void)_scrollViewWillBeginZooming;	// 0x32c753d9
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x32bd40a1
- (void)_setAbsoluteContentOffset:(CGPoint)offset animated:(BOOL)animated;	// 0x32cd07d9
// declared property setter: - (void)_setAutomaticContentConstraints:(id)constraints;	// 0x32cce7c5
- (void)_setAutomaticContentOffsetAdjustmentEnabled:(BOOL)enabled;	// 0x32c46141
- (void)_setAutoscrolling:(BOOL)autoscrolling;	// 0x32cd0ce9
- (void)_setContentOffset:(CGPoint)offset animated:(BOOL)animated animationCurve:(int)curve;	// 0x32b52b09
- (void)_setContentOffset:(CGPoint)offset animated:(BOOL)animated animationCurve:(int)curve animationAdjustsForContentOffsetDelta:(BOOL)contentOffsetDelta;	// 0x32b52b35
- (void)_setContentOffset:(CGPoint)offset duration:(double)duration animationCurve:(int)curve;	// 0x32cd0729
- (void)_setContentOffsetAnimationDuration:(double)duration;	// 0x32c4166d
- (void)_setContentOffsetPinned:(CGPoint)pinned;	// 0x32ba0651
- (void)_setContentOffsetPinned:(CGPoint)pinned animated:(BOOL)animated;	// 0x32cd0bf9
- (void)_setIgnoreLinkedOnChecks:(BOOL)checks;	// 0x32cce5b5
- (void)_setPagingFriction:(float)friction;	// 0x32cce601
- (void)_setShowsBackgroundShadow:(BOOL)shadow;	// 0x32b96285
- (void)_setStaysCenteredDuringPinch:(BOOL)pinch;	// 0x32cce2f9
- (void)_setSubviewWantsAutolayout;	// 0x32cce9f5
- (void)_setTransfersScrollToContainer:(BOOL)container;	// 0x32cccf55
// declared property setter: - (void)_setUseContentDimensionVariablesForConstraintLowering:(BOOL)constraintLowering;	// 0x32ccfad5
// declared property setter: - (void)_setZoomAnchorPoint:(CADoublePoint)point;	// 0x32c71435
- (float)_shadowHeightOffset;	// 0x32b967c1
- (void)_shiftOffset:(CGSize)offset;	// 0x32cd0b39
- (BOOL)_shouldTrackImmediatelyWhileDecelerating;	// 0x32c20ed5
- (BOOL)_showsBackgroundShadow;	// 0x32b755a5
- (void)_skipNextStartOffsetAdjustment;	// 0x32b75b79
- (void)_smoothScrollDisplayLink:(id)link;	// 0x32cd2211
- (void)_smoothScrollTimer:(id)timer;	// 0x32cd22e9
- (void)_smoothScrollWithUpdateTime:(double)updateTime;	// 0x32cd14b1
- (void)_startGesture:(id)gesture withEvent:(id)event;	// 0x32ccfb19
- (void)_startTimer:(BOOL)timer;	// 0x32c20761
- (BOOL)_staysCenteredDuringPinch;	// 0x32c75359
- (void)_stopScrollDecelerationNotify:(BOOL)notify;	// 0x32c21af9
- (void)_stopScrollingAndZoomingAnimations;	// 0x32c9ac1d
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)contentViewport;	// 0x32c29249
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)contentViewport tramplingDragFlags:(BOOL)flags;	// 0x32cd0375
- (void)_stopScrollingNotify:(BOOL)notify pin:(BOOL)pin;	// 0x32bcb3e1
- (void)_stopScrollingNotify:(BOOL)notify pin:(BOOL)pin tramplingDragFlags:(BOOL)flags;	// 0x32cd017d
- (BOOL)_supportsContentDimensionVariables;	// 0x32cce945
- (void)_systemGestureStateChanged:(id)changed;	// 0x32c23685
- (double)_touchDelayForScrollDetection;	// 0x32bfdce9
- (CGPoint)_touchPositionForTouches:(id)touches;	// 0x32c59225
- (id)_touchedContentView;	// 0x32c2659d
- (void)_touchesEnded:(id)ended withEvent:(id)event wasCancelled:(BOOL)cancelled;	// 0x32c265f1
- (BOOL)_transfersScrollToContainer;	// 0x32c754a5
- (void)_updateContentFitDisableScrolling;	// 0x32cccd75
- (void)_updatePagingGesture;	// 0x32b4d3b5
- (void)_updatePanGesture;	// 0x32c1e7a9
- (void)_updatePanGestureConfiguration;	// 0x32ccc701
- (void)_updatePinchGesture;	// 0x32b4d251
- (void)_updatePinchGestureForState:(int)state;	// 0x32c74841
- (BOOL)_updateTouchPanWithStartDelta:(CGSize)startDelta event:(id)event ignoringDirectionalScroll:(BOOL)scroll;	// 0x32ccd2b9
// declared property getter: - (BOOL)_useContentDimensionVariablesForConstraintLowering;	// 0x32ccfac5
- (BOOL)_usesDifferentHitTestForGestures;	// 0x32c59209
- (double)_verticalVelocity;	// 0x32c3bf19
- (BOOL)_viewIsInsideNavigationController;	// 0x32cd2461
- (void)_webCustomViewWillBeRemovedFromSuperview;	// 0x32cccd2d
- (void)_willMoveToWindow:(id)window;	// 0x32b59451
// declared property getter: - (CADoublePoint)_zoomAnchorPoint;	// 0x32c72061
- (void)_zoomAnimationDidStop;	// 0x32c75685
- (float)_zoomAnimationDurationForScale:(float)scale;	// 0x32c754c1
- (float)_zoomRubberBandScaleForScale:(float)scale;	// 0x32c75425
- (float)_zoomScaleForRubberBandScale:(float)rubberBandScale;	// 0x32ccf32d
- (float)_zoomScaleFromPresentationLayer:(BOOL)presentationLayer;	// 0x32b97fb1
- (void)_zoomToCenter:(CGPoint)center scale:(float)scale duration:(double)duration;	// 0x32ccf0fd
- (void)_zoomToCenter:(CGPoint)center scale:(float)scale duration:(double)duration force:(BOOL)force;	// 0x32ccf135
// converted property getter: - (BOOL)allowsMultipleFingers;	// 0x32ccd135
// declared property getter: - (BOOL)alwaysBounceHorizontal;	// 0x32b04a8d
// declared property getter: - (BOOL)alwaysBounceVertical;	// 0x32b04bc1
- (void)animator:(id)animator stopAnimation:(id)animation fraction:(float)fraction;	// 0x32c4fa31
// converted property getter: - (CGPoint)autoscrollContentOffset;	// 0x32cd0d95
// declared property getter: - (BOOL)bounces;	// 0x32cccedd
// converted property getter: - (BOOL)bouncesHorizontally;	// 0x32cccf11
// converted property getter: - (BOOL)bouncesVertically;	// 0x32cccf3d
// declared property getter: - (BOOL)bouncesZoom;	// 0x32cce3f1
// declared property getter: - (BOOL)canCancelContentTouches;	// 0x32cce405
- (BOOL)canHandleSwipes;	// 0x32b600b5
- (BOOL)cancelMouseTracking;	// 0x32cce3bd
- (void)cancelNextContentTouchEnded;	// 0x32cce3d5
- (BOOL)cancelTouchTracking;	// 0x32c8bcad
- (id)commonHitTest:(id)test;	// 0x32bfb755
- (CGRect)contentFrameForView:(id)view;	// 0x32cd0dc5
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x32b04441
// declared property getter: - (CGPoint)contentOffset;	// 0x32b041dd
// declared property getter: - (CGSize)contentSize;	// 0x32b14af9
- (void)dealloc;	// 0x32c28f49
// declared property getter: - (float)decelerationRate;	// 0x32ccd07d
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x32cd25e9
- (void)delayed:(id)delayed;	// 0x32ccd1b9
// declared property getter: - (BOOL)delaysContentTouches;	// 0x32bfdcd1
// declared property getter: - (id)delegate;	// 0x32b183e5
- (id)description;	// 0x32ccf9e1
- (void)didFinishGesture:(int)gesture inView:(id)view forEvent:(GSEventRef)event;	// 0x32cd0039
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x32cd2501
- (void)encodeWithCoder:(id)coder;	// 0x32ccc2f9
- (void)flashScrollIndicators;	// 0x32b66161
- (BOOL)gestureRecognizer:(id)recognizer canPreventGestureRecognizer:(id)recognizer2;	// 0x32c13121
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x32bfb929
- (void)handlePan:(id)pan;	// 0x32c1e679
- (void)handlePinch:(id)pinch;	// 0x32c74811
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32ccd1e9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32bfb2cd
// converted property getter: - (float)horizontalScrollDecelerationFactor;	// 0x32ccd0a9
// declared property getter: - (int)indicatorStyle;	// 0x32ccd08d
// declared property getter: - (BOOL)isDecelerating;	// 0x32b5de79
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x32cccde5
// declared property getter: - (BOOL)isDragging;	// 0x32b5de91
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32d80f69
// declared property getter: - (BOOL)isPagingEnabled;	// 0x32bcb405
// declared property getter: - (BOOL)isProgrammaticScrollEnabled;	// 0x32ccce45
// declared property getter: - (BOOL)isScrollEnabled;	// 0x32bd40a9
// declared property getter: - (BOOL)isTracking;	// 0x32b045c5
// declared property getter: - (BOOL)isZoomBouncing;	// 0x32ccf9cd
// converted property getter: - (BOOL)isZoomEnabled;	// 0x32ccce2d
// declared property getter: - (BOOL)isZooming;	// 0x32c7141d
- (void)layoutSubviews;	// 0x32b5a4cd
- (float)maxVelocityInDirection:(int)direction;	// 0x32dd1d39
// declared property getter: - (float)maximumZoomScale;	// 0x32cccd1d
// declared property getter: - (float)minimumZoomScale;	// 0x32c7604d
- (id)nsli_contentHeightVariable;	// 0x32cceb19
- (id)nsli_contentWidthVariable;	// 0x32ccea71
// converted property getter: - (CGPoint)offset;	// 0x32b9f431
// declared property getter: - (id)panGestureRecognizer;	// 0x32b70d15
// declared property getter: - (id)pinchGestureRecognizer;	// 0x32ccfa85
// converted property getter: - (BOOL)preservesCenterDuringRotation;	// 0x32ccd1bd
- (void)removeFromSuperview;	// 0x32c27961
// declared property getter: - (UIEdgeInsets)scrollIndicatorInsets;	// 0x32b9820d
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x32bd40c1
// declared property getter: - (id)scrollTestParameters;	// 0x32ccfa95
- (int)scrollableDirections;	// 0x32dd1c65
// declared property getter: - (BOOL)scrollsToTop;	// 0x32cce4b9
// converted property setter: - (void)setAllowsMultipleFingers:(BOOL)fingers;	// 0x32ccd0d1
// declared property setter: - (void)setAlwaysBounceHorizontal:(BOOL)horizontal;	// 0x32c6f7f5
// declared property setter: - (void)setAlwaysBounceVertical:(BOOL)vertical;	// 0x32b97171
// converted property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x32cd0db5
// declared property setter: - (void)setBounces:(BOOL)bounces;	// 0x32bb7e29
// converted property setter: - (void)setBouncesHorizontally:(BOOL)horizontally;	// 0x32cccef9
// converted property setter: - (void)setBouncesVertically:(BOOL)vertically;	// 0x32cccf25
// declared property setter: - (void)setBouncesZoom:(BOOL)zoom;	// 0x32b97155
- (void)setBounds:(CGRect)bounds;	// 0x32b4f8c1
// declared property setter: - (void)setCanCancelContentTouches:(BOOL)touches;	// 0x32cce419
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x32b4f381
// declared property setter: - (void)setContentOffset:(CGPoint)offset;	// 0x32b045d9
- (void)setContentOffset:(CGPoint)offset animated:(BOOL)animated;	// 0x32b52ae5
// declared property setter: - (void)setContentSize:(CGSize)size;	// 0x32b039d1
// declared property setter: - (void)setDecelerationRate:(float)rate;	// 0x32bb7ead
// declared property setter: - (void)setDelaysContentTouches:(BOOL)touches;	// 0x32b9626d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32b4ed01
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x32b9622d
- (void)setFrame:(CGRect)frame;	// 0x32b4c571
// converted property setter: - (void)setHorizontalScrollDecelerationFactor:(float)factor;	// 0x32b96201
// declared property setter: - (void)setIndicatorStyle:(int)style;	// 0x32cccfb9
// declared property setter: - (void)setMaximumZoomScale:(float)scale;	// 0x32b9b4a5
// declared property setter: - (void)setMinimumZoomScale:(float)scale;	// 0x32b9b46d
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x32ccfaf9
// declared property setter: - (void)setPagingEnabled:(BOOL)enabled;	// 0x32bb7e65
// converted property setter: - (void)setPreservesCenterDuringRotation:(BOOL)rotation;	// 0x32c71035
// declared property setter: - (void)setProgrammaticScrollEnabled:(BOOL)enabled;	// 0x32c46875
// declared property setter: - (void)setScrollEnabled:(BOOL)enabled;	// 0x32bb7ef1
// declared property setter: - (void)setScrollIndicatorInsets:(UIEdgeInsets)insets;	// 0x32b52019
// declared property setter: - (void)setScrollTestParameters:(id)parameters;	// 0x32c292ed
- (void)setScrollingEnabled:(BOOL)enabled;	// 0x32ccfb09
// declared property setter: - (void)setScrollsToTop:(BOOL)top;	// 0x32b4f2fd
- (void)setShowBackgroundShadow:(BOOL)shadow;	// 0x32ccd1d5
// declared property setter: - (void)setShowsHorizontalScrollIndicator:(BOOL)indicator;	// 0x32b038cd
// declared property setter: - (void)setShowsVerticalScrollIndicator:(BOOL)indicator;	// 0x32b03951
// converted property setter: - (void)setTracksImmediatelyWhileDecelerating:(BOOL)decelerating;	// 0x32ccd151
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x32cce535
// converted property setter: - (void)setUsesGestureRecognizers:(BOOL)recognizers;	// 0x32b4ca8d
// converted property setter: - (void)setVerticalScrollDecelerationFactor:(float)factor;	// 0x32b96215
// converted property setter: - (void)setZoomEnabled:(BOOL)enabled;	// 0x32b9b7a9
// declared property setter: - (void)setZoomScale:(float)scale;	// 0x32c7117d
- (void)setZoomScale:(float)scale animated:(BOOL)animated;	// 0x32c71191
- (void)setZoomScale:(float)scale withAnchorPoint:(CADoublePoint)anchorPoint validatingScrollOffset:(BOOL)offset allowRubberbanding:(BOOL)rubberbanding animated:(BOOL)animated duration:(double)duration notifyDelegate:(BOOL)delegate;	// 0x32c7152d
- (void)setZoomScale:(float)scale withAnchorPoint:(CADoublePoint)anchorPoint validatingScrollOffset:(BOOL)offset allowRubberbanding:(BOOL)rubberbanding animated:(BOOL)animated duration:(double)duration notifyDelegate:(BOOL)delegate force:(BOOL)force;	// 0x32c71581
// declared property getter: - (BOOL)showsHorizontalScrollIndicator;	// 0x32cccf91
// declared property getter: - (BOOL)showsVerticalScrollIndicator;	// 0x32cccfa5
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x32cce371
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32c25c0d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32c591b5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32c265c9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32c8cc09
- (BOOL)touchesShouldBegin:(id)touches withEvent:(id)event inContentView:(id)contentView;	// 0x32bff8ad
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x32cce431
// converted property getter: - (BOOL)tracksImmediatelyWhileDecelerating;	// 0x32c20f41
// converted property getter: - (BOOL)usesGestureRecognizers;	// 0x32b4ca71
// converted property getter: - (float)verticalScrollDecelerationFactor;	// 0x32ccd0b9
- (void)willAnimateRotationToInterfaceOrientation:(id)interfaceOrientation;	// 0x32c760a9
- (void)willRotateToInterfaceOrientation:(id)interfaceOrientation;	// 0x32c75bf1
// declared property getter: - (float)zoomScale;	// 0x32b97f99
- (void)zoomToRect:(CGRect)rect animated:(BOOL)animated;	// 0x32ccf3b9
@end

