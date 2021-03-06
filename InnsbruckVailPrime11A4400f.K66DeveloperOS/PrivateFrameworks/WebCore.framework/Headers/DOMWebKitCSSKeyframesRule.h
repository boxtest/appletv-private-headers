/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMCSSRule.h"

@class NSString, DOMCSSRuleList;

@interface DOMWebKitCSSKeyframesRule : DOMCSSRule {
}
@property(readonly, assign) DOMCSSRuleList *cssRules;	// G=0x331cdb7d; 
@property(copy) NSString *name;	// G=0x331cd921; S=0x331cda55; 
// declared property getter: - (id)cssRules;	// 0x331cdb7d
- (void)deleteRule:(id)rule;	// 0x331cdd99
- (id)findRule:(id)rule;	// 0x331cdec1
- (void)insertRule:(id)rule;	// 0x331cdc71
// declared property getter: - (id)name;	// 0x331cd921
// declared property setter: - (void)setName:(id)name;	// 0x331cda55
@end

