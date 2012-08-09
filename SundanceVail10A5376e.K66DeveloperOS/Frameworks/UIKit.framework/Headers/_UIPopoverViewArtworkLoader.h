/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPopoverViewArtworkLoader : NSObject {
	int _backgroundStyle;	// 4 = 0x4
	NSString *_backgroundSelector;	// 8 = 0x8
}
+ (id)backgroundSelectorForBackgroundStyle:(int)backgroundStyle;	// 0x305f37cd
- (id)initWithBackgroundStyle:(int)backgroundStyle;	// 0x305f370d
- (id)bottomArrowLeftEndCapView;	// 0x305f4e51
- (id)bottomArrowPinnedView;	// 0x305f4c61
- (id)bottomArrowRightEndCapView;	// 0x305f501d
- (id)bottomArrowView;	// 0x305f4a91
- (CGRect)contentRectForRect:(CGRect)rect inImageOfSize:(CGSize)size;	// 0x305f38a9
- (CGRect)contentsCenterForRect:(CGRect)rect inImageOfSize:(CGSize)size;	// 0x305f38e5
- (void)dealloc;	// 0x305f3781
- (id)rightArrowBottomEndCapView;	// 0x305f4881
- (id)rightArrowPinnedBottomView;	// 0x305f44cd
- (id)rightArrowPinnedTopView;	// 0x305f4305
- (id)rightArrowTopEndCapView;	// 0x305f46b9
- (id)rightArrowView;	// 0x305f4135
- (id)shortBottomArrowLeftEndCapView;	// 0x305f5cc9
- (id)shortBottomArrowPinnedView;	// 0x305f5ad9
- (id)shortBottomArrowRightEndCapView;	// 0x305f5e95
- (id)shortBottomArrowView;	// 0x305f5909
- (id)shortRightArrowView;	// 0x305f5721
- (id)shortTopArrowLeftEndCapView;	// 0x305f5499
- (id)shortTopArrowPinnedView;	// 0x305f52a9
- (id)shortTopArrowRightEndCapView;	// 0x305f5665
- (id)shortTopArrowView;	// 0x305f50d9
- (id)templateImageForDirection:(id)direction shortArtwork:(BOOL)artwork;	// 0x305f3825
- (id)topArrowLeftEndCapView;	// 0x305f3ead
- (id)topArrowPinnedView;	// 0x305f3cbd
- (id)topArrowRightEndCapView;	// 0x305f4079
- (id)topArrowView;	// 0x305f3aed
- (id)viewWithContentsImage:(id)contentsImage rect:(CGRect)rect center:(CGRect)center antialiasingMask:(unsigned)mask directionSelector:(id)selector;	// 0x305f3971
@end
