/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLTableCaptionElement, DOMHTMLCollection, DOMHTMLTableSectionElement;

@interface DOMHTMLTableElement : DOMHTMLElement {
}
@property(copy) NSString *align;	// G=0x36004c79; S=0x36004d9d; 
@property(copy) NSString *bgColor;	// G=0x36004f51; S=0x36005075; 
@property(copy) NSString *border;	// G=0x36005229; S=0x3600534d; 
@property(retain) DOMHTMLTableCaptionElement *caption;	// G=0x360042bd; S=0x360043c9; 
@property(copy) NSString *cellPadding;	// G=0x36005501; S=0x36005625; 
@property(copy) NSString *cellSpacing;	// G=0x360057d9; S=0x360058fd; 
@property(copy) NSString *frameBorders;	// G=0x36005ab1; S=0x36005bd5; 
@property(readonly, assign) DOMHTMLCollection *rows;	// G=0x36004a61; 
@property(copy) NSString *rules;	// G=0x36005d89; S=0x36005ead; 
@property(copy) NSString *summary;	// G=0x36006061; S=0x36006185; 
@property(readonly, assign) DOMHTMLCollection *tBodies;	// G=0x36004b6d; 
@property(retain) DOMHTMLTableSectionElement *tFoot;	// G=0x360047d5; S=0x360048e1; 
@property(retain) DOMHTMLTableSectionElement *tHead;	// G=0x36004549; S=0x36004655; 
@property(copy) NSString *width;	// G=0x36006339; S=0x3600645d; 
// declared property getter: - (id)align;	// 0x36004c79
// declared property getter: - (id)bgColor;	// 0x36004f51
// declared property getter: - (id)border;	// 0x36005229
// declared property getter: - (id)caption;	// 0x360042bd
// declared property getter: - (id)cellPadding;	// 0x36005501
// declared property getter: - (id)cellSpacing;	// 0x360057d9
- (id)createCaption;	// 0x36006c35
- (id)createTBody;	// 0x36006ad1
- (id)createTFoot;	// 0x36006871
- (id)createTHead;	// 0x36006611
- (void)deleteCaption;	// 0x36006d99
- (void)deleteRow:(int)row;	// 0x3600700d
- (void)deleteTFoot;	// 0x360069d5
- (void)deleteTHead;	// 0x36006775
// declared property getter: - (id)frameBorders;	// 0x36005ab1
- (id)insertRow:(int)row;	// 0x36006e95
// declared property getter: - (id)rows;	// 0x36004a61
// declared property getter: - (id)rules;	// 0x36005d89
// declared property setter: - (void)setAlign:(id)align;	// 0x36004d9d
// declared property setter: - (void)setBgColor:(id)color;	// 0x36005075
// declared property setter: - (void)setBorder:(id)border;	// 0x3600534d
// declared property setter: - (void)setCaption:(id)caption;	// 0x360043c9
// declared property setter: - (void)setCellPadding:(id)padding;	// 0x36005625
// declared property setter: - (void)setCellSpacing:(id)spacing;	// 0x360058fd
// declared property setter: - (void)setFrameBorders:(id)borders;	// 0x36005bd5
// declared property setter: - (void)setRules:(id)rules;	// 0x36005ead
// declared property setter: - (void)setSummary:(id)summary;	// 0x36006185
// declared property setter: - (void)setTFoot:(id)foot;	// 0x360048e1
// declared property setter: - (void)setTHead:(id)head;	// 0x36004655
// declared property setter: - (void)setWidth:(id)width;	// 0x3600645d
- (int)structuralComplexityContribution;	// 0x36027c3d
// declared property getter: - (id)summary;	// 0x36006061
// declared property getter: - (id)tBodies;	// 0x36004b6d
// declared property getter: - (id)tFoot;	// 0x360047d5
// declared property getter: - (id)tHead;	// 0x36004549
// declared property getter: - (id)width;	// 0x36006339
@end
