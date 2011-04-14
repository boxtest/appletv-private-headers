/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMCSSRule.h"

@class DOMCSSRuleList, NSString;

__attribute__((visibility("hidden")))
@interface DOMWebKitCSSKeyframesRule : DOMCSSRule {
}
@property(readonly, retain) DOMCSSRuleList *cssRules;	// G=0x33fb1231; 
@property(copy) NSString *name;	// G=0x33fb0fe5; S=0x33fb1119; 
// declared property getter: - (id)cssRules;	// 0x33fb1231
- (void)deleteRule:(id)rule;	// 0x33fb1365
- (id)findRule:(id)rule;	// 0x33fb147d
- (void)insertRule:(id)rule;	// 0x33fb124d
// declared property getter: - (id)name;	// 0x33fb0fe5
// declared property setter: - (void)setName:(id)name;	// 0x33fb1119
@end
