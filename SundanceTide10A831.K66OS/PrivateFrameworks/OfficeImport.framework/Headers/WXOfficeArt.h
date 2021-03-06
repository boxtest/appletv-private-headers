/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WXOfficeArt : NSObject {
}
+ (void)initialize;	// 0x36ab227d
+ (void)readClientData:(xmlNode *)data state:(id)state to:(id)to;	// 0x36ab4f7d
+ (void)readFrom:(xmlNode *)from parentRElement:(xmlNode *)element parentParagraph:(id)paragraph state:(id)state to:(id)to;	// 0x36ab2349
+ (void)readOAX:(xmlNode *)oax parentRElement:(xmlNode *)element parentParagraph:(id)paragraph state:(id)state to:(id)to;	// 0x36ab276d
+ (void)readPosition:(xmlNode *)position state:(id)state to:(id)to isHorizontal:(bool)horizontal;	// 0x36ab5671
+ (void)readVml:(xmlNode *)vml parentRElement:(xmlNode *)element parentParagraph:(id)paragraph state:(id)state to:(id)to;	// 0x36aba8e1
+ (void)readWrap:(xmlNode *)wrap state:(id)state to:(id)to;	// 0x36ab5a39
+ (void)readWrapDistance:(xmlNode *)distance parentElement:(xmlNode *)element state:(id)state to:(id)to;	// 0x36b6cb39
@end

