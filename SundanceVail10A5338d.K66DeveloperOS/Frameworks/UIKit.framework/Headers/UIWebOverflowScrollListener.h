/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"
#import "UIScrollViewDelegate.h"

@class UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate> {
	UIWebOverflowScrollView *_scrollView;	// 4 = 0x4
}
- (id)initWithScrollView:(id)scrollView;	// 0x30fcafd1
- (void)_didCompleteScrolling;	// 0x30fcb07d
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x30fcb12d
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x30fcb115
- (void)scrollViewDidScrollToTop:(id)scrollView;	// 0x30fcb13d
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x30fcb029
@end

