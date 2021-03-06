/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAVClient.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXVmlClient : NSObject <OAVClient> {
}
+ (id)edTextBoxForVmlTextInShape:(xmlNode *)shape to:(id)to state:(id)state;	// 0x345c9479
+ (void)readAnchor:(xmlNode *)anchor to:(id)to;	// 0x345829b1
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x345c9475
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x345825bd
+ (id)readComment:(xmlNode *)comment to:(id)to;	// 0x34582ccd
+ (int)vmlSupportLevel;	// 0x345825b9
@end

