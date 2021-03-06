/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDParagraphProperties, WMParagraphStyle, WDParagraph;

@interface WMParagraphStyleMapper : CMMapper {
	WDParagraphProperties *wdParaProperties;	// 8 = 0x8
	WDParagraph *wdParagraph;	// 12 = 0xc
	WMParagraphStyle *mStyle;	// 16 = 0x10
}
- (id)initWithWDParagraph:(id)wdparagraph parent:(id)parent isInTextFrame:(BOOL)textFrame;	// 0x31c7e1f1
- (id)bulletLabelAtLevel:(id)level forIndex:(int)index bulletFormat:(int)format listState:(id)state;	// 0x31c87b8d
- (bool)checkListId:(int)anId level:(int)level;	// 0x31c87519
- (void)dealloc;	// 0x31c818fd
- (void)destyleEmptyParagraph;	// 0x31c816f1
- (BOOL)isListItem;	// 0x31c7f811
- (id)labelStringWithGap:(id)gap;	// 0x31d5a0ad
- (void)mapAt:(id)at withState:(id)state;	// 0x31c817e1
- (void)mapBulletAt:(id)at forLevel:(id)level forIndex:(int)index listState:(id)state isOutline:(BOOL)outline;	// 0x31c87871
- (void)mapListStyleAt:(id)at state:(id)state;	// 0x31c7f89d
@end

