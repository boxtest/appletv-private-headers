/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableView.h"

@class UISearchDisplayController;

@interface UISearchResultsTableView : UITableView {
	UISearchDisplayController *_controller;	// 736 = 0x2e0
}
@property(assign, nonatomic) UISearchDisplayController *controller;	// G=0x35939721; S=0x35745515; @synthesize=_controller
- (void)_numberOfRowsDidChange;	// 0x357b4fb1
- (float)_offsetForNoResultsMessage;	// 0x35939519
// declared property getter: - (id)controller;	// 0x35939721
- (void)setContentOffset:(CGPoint)offset;	// 0x357b4a15
// declared property setter: - (void)setController:(id)controller;	// 0x35745515
@end
