/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLCollection, NSString;

__attribute__((visibility("hidden")))
@interface DOMHTMLTableRowElement : DOMHTMLElement {
}
@property(copy) NSString *align;	// G=0x30723f5d; S=0x307243bd; 
@property(copy) NSString *bgColor;	// G=0x3072403d; S=0x30724501; 
@property(readonly, retain) DOMHTMLCollection *cells;	// G=0x30723e15; 
@property(copy) NSString *ch;	// G=0x3072411d; S=0x30724645; 
@property(copy) NSString *chOff;	// G=0x307241fd; S=0x30724789; 
@property(readonly, assign) int rowIndex;	// G=0x30723c9d; 
@property(readonly, assign) int sectionRowIndex;	// G=0x30723d59; 
@property(copy) NSString *vAlign;	// G=0x307242dd; S=0x307248cd; 
// declared property getter: - (id)align;	// 0x30723f5d
// declared property getter: - (id)bgColor;	// 0x3072403d
// declared property getter: - (id)cells;	// 0x30723e15
// declared property getter: - (id)ch;	// 0x3072411d
// declared property getter: - (id)chOff;	// 0x307241fd
- (void)deleteCell:(int)cell;	// 0x30724b65
- (id)insertCell:(int)cell;	// 0x30724a11
// declared property getter: - (int)rowIndex;	// 0x30723c9d
// declared property getter: - (int)sectionRowIndex;	// 0x30723d59
// declared property setter: - (void)setAlign:(id)align;	// 0x307243bd
// declared property setter: - (void)setBgColor:(id)color;	// 0x30724501
// declared property setter: - (void)setCh:(id)ch;	// 0x30724645
// declared property setter: - (void)setChOff:(id)off;	// 0x30724789
// declared property setter: - (void)setVAlign:(id)align;	// 0x307248cd
// declared property getter: - (id)vAlign;	// 0x307242dd
@end

