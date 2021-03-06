/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLCollection, DOMHTMLTableSectionElement, NSString, DOMHTMLTableCaptionElement;

__attribute__((visibility("hidden")))
@interface DOMHTMLTableElement : DOMHTMLElement {
}
@property(copy) NSString *align;	// G=0x353f5675; S=0x353f5799; 
@property(copy) NSString *bgColor;	// G=0x353f594d; S=0x353f5a71; 
@property(copy) NSString *border;	// G=0x353f5c25; S=0x353f5d49; 
@property(retain) DOMHTMLTableCaptionElement *caption;	// G=0x353f4cb9; S=0x353f4dc5; 
@property(copy) NSString *cellPadding;	// G=0x353f5efd; S=0x353f6021; 
@property(copy) NSString *cellSpacing;	// G=0x353f61d5; S=0x353f62f9; 
@property(copy) NSString *frameBorders;	// G=0x353f64ad; S=0x353f65d1; 
@property(readonly, assign) DOMHTMLCollection *rows;	// G=0x353f545d; 
@property(copy) NSString *rules;	// G=0x353f6785; S=0x353f68a9; 
@property(copy) NSString *summary;	// G=0x353f6a5d; S=0x353f6b81; 
@property(readonly, assign) DOMHTMLCollection *tBodies;	// G=0x353f5569; 
@property(retain) DOMHTMLTableSectionElement *tFoot;	// G=0x353f51d1; S=0x353f52dd; 
@property(retain) DOMHTMLTableSectionElement *tHead;	// G=0x353f4f45; S=0x353f5051; 
@property(copy) NSString *width;	// G=0x353f6d35; S=0x353f6e59; 
// declared property getter: - (id)align;	// 0x353f5675
// declared property getter: - (id)bgColor;	// 0x353f594d
// declared property getter: - (id)border;	// 0x353f5c25
// declared property getter: - (id)caption;	// 0x353f4cb9
// declared property getter: - (id)cellPadding;	// 0x353f5efd
// declared property getter: - (id)cellSpacing;	// 0x353f61d5
- (id)createCaption;	// 0x353f7631
- (id)createTBody;	// 0x353f74cd
- (id)createTFoot;	// 0x353f726d
- (id)createTHead;	// 0x353f700d
- (void)deleteCaption;	// 0x353f7795
- (void)deleteRow:(int)row;	// 0x353f7a09
- (void)deleteTFoot;	// 0x353f73d1
- (void)deleteTHead;	// 0x353f7171
// declared property getter: - (id)frameBorders;	// 0x353f64ad
- (id)insertRow:(int)row;	// 0x353f7891
// declared property getter: - (id)rows;	// 0x353f545d
// declared property getter: - (id)rules;	// 0x353f6785
// declared property setter: - (void)setAlign:(id)align;	// 0x353f5799
// declared property setter: - (void)setBgColor:(id)color;	// 0x353f5a71
// declared property setter: - (void)setBorder:(id)border;	// 0x353f5d49
// declared property setter: - (void)setCaption:(id)caption;	// 0x353f4dc5
// declared property setter: - (void)setCellPadding:(id)padding;	// 0x353f6021
// declared property setter: - (void)setCellSpacing:(id)spacing;	// 0x353f62f9
// declared property setter: - (void)setFrameBorders:(id)borders;	// 0x353f65d1
// declared property setter: - (void)setRules:(id)rules;	// 0x353f68a9
// declared property setter: - (void)setSummary:(id)summary;	// 0x353f6b81
// declared property setter: - (void)setTFoot:(id)foot;	// 0x353f52dd
// declared property setter: - (void)setTHead:(id)head;	// 0x353f5051
// declared property setter: - (void)setWidth:(id)width;	// 0x353f6e59
- (int)structuralComplexityContribution;	// 0x35419e69
// declared property getter: - (id)summary;	// 0x353f6a5d
// declared property getter: - (id)tBodies;	// 0x353f5569
// declared property getter: - (id)tFoot;	// 0x353f51d1
// declared property getter: - (id)tHead;	// 0x353f4f45
// declared property getter: - (id)width;	// 0x353f6d35
@end

