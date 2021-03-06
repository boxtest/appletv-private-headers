/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UICalloutBarOverlay, UICalloutBarButton, NSMutableArray, NSString, NSArray;

@interface UICalloutBar : UIView {
	id m_delegate;	// 48 = 0x30
	CGPoint m_pointBelowControls;	// 52 = 0x34
	CGPoint m_pointAboveControls;	// 60 = 0x3c
	CGPoint m_pointLeftOfControls;	// 68 = 0x44
	CGPoint m_pointRightOfControls;	// 76 = 0x4c
	CGPoint m_targetPoint;	// 84 = 0x54
	int m_targetDirection;	// 92 = 0x5c
	BOOL m_targetHorizontal;	// 96 = 0x60
	BOOL m_fadeAfterCommand;	// 97 = 0x61
	BOOL m_recalcVisibleItems;	// 98 = 0x62
	BOOL m_shouldAppear;	// 99 = 0x63
	int m_pageCount;	// 100 = 0x64
	int m_currentPage;	// 104 = 0x68
	BOOL m_supressesHorizontalMovement;	// 108 = 0x6c
	CGRect m_controlFrame;	// 112 = 0x70
	CGRect m_targetRect;	// 128 = 0x80
	CGRect m_supressesHorizontalMovementFrame;	// 144 = 0x90
	float m_supressedHorizontalMovementX;	// 160 = 0xa0
	int m_arrowDirection;	// 164 = 0xa4
	NSMutableArray *m_systemButtons;	// 168 = 0xa8
	NSMutableArray *m_extraButtons;	// 172 = 0xac
	UICalloutBarButton *m_nextButton;	// 176 = 0xb0
	UICalloutBarButton *m_previousButton;	// 180 = 0xb4
	NSMutableArray *m_rectsToEvade;	// 184 = 0xb8
	UICalloutBarOverlay *m_overlay;	// 188 = 0xbc
	double m_fadedTime;	// 192 = 0xc0
	id m_responderTarget;	// 200 = 0xc8
	NSArray *m_replacements;	// 204 = 0xcc
	NSArray *m_extraItems;	// 208 = 0xd0
	NSString *m_untruncatedString;	// 212 = 0xd4
	BOOL m_didPromptForReplace;	// 216 = 0xd8
	BOOL m_ignoringEvents;	// 217 = 0xd9
	BOOL m_showAllReplacements;	// 218 = 0xda
	BOOL m_ignoreFade;	// 219 = 0xdb
}
@property(assign, nonatomic) int arrowDirection;	// G=0x351c11e5; S=0x351bf175; @synthesize=m_arrowDirection
@property(assign, nonatomic) CGRect controlFrame;	// G=0x3521a0c5; S=0x351bfe6d; @synthesize=m_controlFrame
@property(assign, nonatomic) id delegate;	// G=0x351bf435; S=0x351bf539; @synthesize=m_delegate
@property(copy, nonatomic) NSArray *extraItems;	// G=0x3521be9d; S=0x35217d95; @synthesize=m_extraItems
@property(assign, nonatomic) CGPoint pointAboveControls;	// G=0x35382fc1; S=0x351bf1a9; @synthesize=m_pointAboveControls
@property(assign, nonatomic) CGPoint pointBelowControls;	// G=0x3521a0f9; S=0x351bf195; @synthesize=m_pointBelowControls
@property(assign, nonatomic) CGPoint pointLeftOfControls;	// G=0x35382fdd; S=0x35382ff9; @synthesize=m_pointLeftOfControls
@property(assign, nonatomic) CGPoint pointRightOfControls;	// G=0x3538300d; S=0x35383029; @synthesize=m_pointRightOfControls
@property(readonly, assign, nonatomic) NSArray *rectsToEvade;	// G=0x3521a0b5; @synthesize=m_rectsToEvade
@property(copy, nonatomic) NSArray *replacements;	// G=0x35383091; S=0x351be3ed; @synthesize=m_replacements
@property(assign, nonatomic) UIResponder *responderTarget;	// G=0x35383071; S=0x35383081; @synthesize=m_responderTarget
@property(assign, nonatomic) BOOL showAllReplacements;	// G=0x353830a1; S=0x353830b1; @synthesize=m_showAllReplacements
@property(assign, nonatomic) BOOL supressesHorizontalMovement;	// G=0x35219f59; S=0x353830f5; @synthesize=m_supressesHorizontalMovement
@property(assign, nonatomic) int targetDirection;	// G=0x3521a0e9; S=0x351bfe5d; @synthesize=m_targetDirection
@property(assign, nonatomic) BOOL targetHorizontal;	// G=0x3538303d; S=0x351bf185; @synthesize=m_targetHorizontal
@property(assign, nonatomic) CGPoint targetPoint;	// G=0x3521a129; S=0x3521a115; @synthesize=m_targetPoint
@property(assign, nonatomic) CGRect targetRect;	// G=0x3538304d; S=0x351bf159; @synthesize=m_targetRect
@property(copy, nonatomic) NSString *untruncatedString;	// G=0x353830c1; S=0x353830d1; @synthesize=m_untruncatedString
@property(readonly, assign, nonatomic) BOOL visible;	// G=0x351bf1bd; 
+ (void)_releaseSharedInstance;	// 0x35382099
+ (id)activeCalloutBar;	// 0x350cec11
+ (void)fadeSharedCalloutBar;	// 0x350cec49
+ (void)hideSharedCalloutBar;	// 0x35126595
+ (id)sharedCalloutBar;	// 0x351bd755
+ (BOOL)sharedCalloutBarIsVisible;	// 0x351c1339
- (id)initWithFrame:(CGRect)frame;	// 0x351bd7b1
- (void)_fadeAfterCommand:(SEL)command;	// 0x3521b9dd
- (void)_showNextItems:(id)items;	// 0x3538222d
- (void)_showPreviousItems:(id)items;	// 0x353821fd
- (BOOL)_updateVisibleItemsAnimated:(BOOL)animated;	// 0x351bf549
- (void)addRectToEvade:(CGRect)evade;	// 0x351be945
- (void)appear;	// 0x351bf229
- (void)appearAnimationDidStop:(id)appearAnimation finished:(id)finished context:(void *)context;	// 0x3521b74d
// declared property getter: - (int)arrowDirection;	// 0x351c11e5
- (void)buttonHighlighted:(id)highlighted highlighted:(BOOL)highlighted2;	// 0x351c07c5
- (void)buttonPressed:(id)pressed;	// 0x3521c879
- (BOOL)calculateControlFrameForCalloutSize:(CGSize)calloutSize below:(BOOL)below;	// 0x35219c7d
- (BOOL)calculateControlFrameForCalloutSize:(CGSize)calloutSize right:(BOOL)right;	// 0x353822ad
- (BOOL)calculateControlFrameInsideTargetRect:(CGSize)rect;	// 0x3538242d
- (void)clearEvadeRects;	// 0x351be7e1
- (void)clearReplacements;	// 0x351c130d
- (void)clearSupressesHorizontalMovementFrame;	// 0x3521bbb5
- (void)configureButtons:(float)buttons;	// 0x3521a145
// declared property getter: - (CGRect)controlFrame;	// 0x3521a0c5
- (void)dealloc;	// 0x353820e9
// declared property getter: - (id)delegate;	// 0x351bf435
- (void)expandAfterAlertOrBecomeActive:(id)active;	// 0x353821e9
// declared property getter: - (id)extraItems;	// 0x3521be9d
- (void)fade;	// 0x3521b9b1
- (void)flattenForAlertOrResignActive:(id)alertOrResignActive;	// 0x353821d5
- (BOOL)hasReplacements;	// 0x351c089d
- (void)hide;	// 0x35382e45
- (void)hideAnimationDidStop:(id)hideAnimation finished:(id)finished context:(void *)context;	// 0x3521bbf9
// declared property getter: - (CGPoint)pointAboveControls;	// 0x35382fc1
// declared property getter: - (CGPoint)pointBelowControls;	// 0x3521a0f9
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3521b925
// declared property getter: - (CGPoint)pointLeftOfControls;	// 0x35382fdd
// declared property getter: - (CGPoint)pointRightOfControls;	// 0x3538300d
- (BOOL)recentlyFaded;	// 0x351c17b9
- (BOOL)rectClear:(CGRect)clear;	// 0x35219f69
// declared property getter: - (id)rectsToEvade;	// 0x3521a0b5
- (void)removeFromSuperview;	// 0x3538226d
// declared property getter: - (id)replacements;	// 0x35383091
// declared property getter: - (id)responderTarget;	// 0x35383071
// declared property setter: - (void)setArrowDirection:(int)direction;	// 0x351bf175
// declared property setter: - (void)setControlFrame:(CGRect)frame;	// 0x351bfe6d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x351bf539
// declared property setter: - (void)setExtraItems:(id)items;	// 0x35217d95
- (BOOL)setFrameForSize:(CGSize)size;	// 0x352198a9
// declared property setter: - (void)setPointAboveControls:(CGPoint)controls;	// 0x351bf1a9
// declared property setter: - (void)setPointBelowControls:(CGPoint)controls;	// 0x351bf195
// declared property setter: - (void)setPointLeftOfControls:(CGPoint)controls;	// 0x35382ff9
// declared property setter: - (void)setPointRightOfControls:(CGPoint)controls;	// 0x35383029
// declared property setter: - (void)setReplacements:(id)replacements;	// 0x351be3ed
// declared property setter: - (void)setResponderTarget:(id)target;	// 0x35383081
// declared property setter: - (void)setShowAllReplacements:(BOOL)replacements;	// 0x353830b1
// declared property setter: - (void)setSupressesHorizontalMovement:(BOOL)movement;	// 0x353830f5
// declared property setter: - (void)setTargetDirection:(int)direction;	// 0x351bfe5d
// declared property setter: - (void)setTargetHorizontal:(BOOL)horizontal;	// 0x351bf185
// declared property setter: - (void)setTargetPoint:(CGPoint)point;	// 0x3521a115
// declared property setter: - (void)setTargetRect:(CGRect)rect;	// 0x351bf159
- (void)setTargetRect:(CGRect)rect arrowDirection:(int)direction;	// 0x35382ad1
- (void)setTargetRect:(CGRect)rect pointBelowControls:(CGPoint)controls pointAboveControls:(CGPoint)controls3;	// 0x351bf05d
- (void)setTargetRect:(CGRect)rect pointLeftOfControls:(CGPoint)controls pointRightOfControls:(CGPoint)controls3;	// 0x353829d5
// declared property setter: - (void)setUntruncatedString:(id)string;	// 0x353830d1
- (void)show;	// 0x35382c91
// declared property getter: - (BOOL)showAllReplacements;	// 0x353830a1
- (float)supressHorizontalXMovementIfNeededForPoint:(CGPoint)point proposedX:(float)x;	// 0x35219ebd
// declared property getter: - (BOOL)supressesHorizontalMovement;	// 0x35219f59
// declared property getter: - (int)targetDirection;	// 0x3521a0e9
- (id)targetForAction:(SEL)action;	// 0x351c08dd
// declared property getter: - (BOOL)targetHorizontal;	// 0x3538303d
// declared property getter: - (CGPoint)targetPoint;	// 0x3521a129
// declared property getter: - (CGRect)targetRect;	// 0x3538304d
- (int)textEffectsVisibilityLevel;	// 0x351bf219
- (CGRect)textEffectsWindowBoundsWithoutStatusBar;	// 0x351c1205
// declared property getter: - (id)untruncatedString;	// 0x353830c1
- (void)update;	// 0x35382f79
- (void)updateAnimated:(BOOL)animated;	// 0x35382f9d
- (void)updateAvailableButtons;	// 0x351bfe89
- (void)updateForCurrentPage;	// 0x3521b159
// declared property getter: - (BOOL)visible;	// 0x351bf1bd
@end

