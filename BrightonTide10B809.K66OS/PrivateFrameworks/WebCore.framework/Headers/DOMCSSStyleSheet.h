/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMStyleSheet.h"

@class DOMCSSRule, DOMCSSRuleList;

@interface DOMCSSStyleSheet : DOMStyleSheet {
}
@property(readonly, assign) DOMCSSRuleList *cssRules;	// G=0x35fb2439; 
@property(readonly, assign) DOMCSSRule *ownerRule;	// G=0x35fb232d; 
@property(readonly, assign) DOMCSSRuleList *rules;	// G=0x35fb257d; 
- (int)addRule:(id)rule style:(id)style index:(unsigned)index;	// 0x35fb2b55
// declared property getter: - (id)cssRules;	// 0x35fb2439
- (void)deleteRule:(unsigned)rule;	// 0x35fb2a41
- (unsigned)insertRule:(id)rule :(unsigned)arg2;	// 0x35fb2881
- (unsigned)insertRule:(id)rule index:(unsigned)index;	// 0x35fb26c1
// declared property getter: - (id)ownerRule;	// 0x35fb232d
- (void)removeRule:(unsigned)rule;	// 0x35fb2dad
// declared property getter: - (id)rules;	// 0x35fb257d
@end
