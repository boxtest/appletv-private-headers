/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKBCacheableView.h"

@class UIKeyboardCandidate, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBarCell : UIView <UIKBCacheableView> {
	UIKeyboardCandidate *m_candidate;	// 84 = 0x54
	NSString *m_candidateText;	// 88 = 0x58
	id m_target;	// 92 = 0x5c
	SEL m_action;	// 96 = 0x60
	CGSize m_textSize;	// 100 = 0x64
	BOOL m_highlighted;	// 108 = 0x6c
	BOOL m_special;	// 109 = 0x6d
}
@property(readonly, assign, nonatomic) BOOL cacheDeferable;	// G=0x32fc81ed; 
@property(readonly, assign, nonatomic) float cachedWidth;	// G=0x32fc81f1; 
@property(assign, nonatomic) BOOL highlighted;	// G=0x32fc7fb1; S=0x32fc7fc1; 
@property(readonly, assign, nonatomic) CGSize stringSize;	// G=0x32fc84e9; @synthesize=m_textSize
+ (id)fontForCandidateText:(id)candidateText;	// 0x32fc79e1
- (id)initWithCandidate:(id)candidate tag:(int)tag target:(id)target action:(SEL)action;	// 0x32fc7ee5
- (id)initWithCandidateText:(id)candidateText tag:(int)tag target:(id)target action:(SEL)action;	// 0x32fc7a05
// declared property getter: - (BOOL)cacheDeferable;	// 0x32fc81ed
- (id)cacheKey;	// 0x32fc7fed
// declared property getter: - (float)cachedWidth;	// 0x32fc81f1
- (void)dealloc;	// 0x32fc7f4d
- (void)displayLayer:(id)layer;	// 0x32fc8069
- (void)drawRect:(CGRect)rect;	// 0x32fc8225
// declared property getter: - (BOOL)highlighted;	// 0x32fc7fb1
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x32fc7fc1
- (BOOL)shouldCache;	// 0x32fc8065
// declared property getter: - (CGSize)stringSize;	// 0x32fc84e9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32fc8381
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32fc84c9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32fc843d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32fc83a1
@end
