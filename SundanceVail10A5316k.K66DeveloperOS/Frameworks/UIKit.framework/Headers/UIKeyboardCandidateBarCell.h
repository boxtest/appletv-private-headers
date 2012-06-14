/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "UIKBCacheableView.h"

@class UIKeyboardCandidate, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBarCell : UIView <UIKBCacheableView> {
@private
	UIKeyboardCandidate *m_candidate;	// 84 = 0x54
	NSString *m_candidateText;	// 88 = 0x58
	id m_target;	// 92 = 0x5c
	SEL m_action;	// 96 = 0x60
	CGSize m_textSize;	// 100 = 0x64
	BOOL m_highlighted;	// 108 = 0x6c
	BOOL m_special;	// 109 = 0x6d
}
@property(readonly, assign, nonatomic) BOOL cacheDeferable;	// G=0x3039dc45; 
@property(readonly, assign, nonatomic) float cachedWidth;	// G=0x3039dc49; 
@property(assign, nonatomic) BOOL highlighted;	// G=0x3039da09; S=0x3039da19; 
@property(readonly, assign, nonatomic) CGSize stringSize;	// G=0x3039defd; @synthesize=m_textSize
+ (id)fontForCandidateText:(id)candidateText;	// 0x3039d3a9
- (id)initWithCandidate:(id)candidate tag:(int)tag target:(id)target action:(SEL)action;	// 0x3039d93d
- (id)initWithCandidateText:(id)candidateText tag:(int)tag target:(id)target action:(SEL)action;	// 0x3039d3cd
// declared property getter: - (BOOL)cacheDeferable;	// 0x3039dc45
- (id)cacheKey;	// 0x3039da45
// declared property getter: - (float)cachedWidth;	// 0x3039dc49
- (void)dealloc;	// 0x3039d9a5
- (void)displayLayer:(id)layer;	// 0x3039dac1
- (void)drawRect:(CGRect)rect;	// 0x3039dc7d
// declared property getter: - (BOOL)highlighted;	// 0x3039da09
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3039da19
- (BOOL)shouldCache;	// 0x3039dabd
// declared property getter: - (CGSize)stringSize;	// 0x3039defd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3039dd95
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3039dedd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3039de51
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3039ddb5
@end
