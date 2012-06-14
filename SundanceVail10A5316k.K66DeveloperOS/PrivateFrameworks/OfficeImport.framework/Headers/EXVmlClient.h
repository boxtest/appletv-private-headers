/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVClient.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXVmlClient : NSObject <OAVClient> {
}
+ (id)edTextBoxForVmlTextInShape:(xmlNode *)shape to:(id)to state:(id)state;	// 0x311cae45
+ (void)readAnchor:(xmlNode *)anchor to:(id)to;	// 0x311c16e9
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x31236015
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x311c1321
+ (id)readComment:(xmlNode *)comment to:(id)to;	// 0x311c1a21
+ (int)vmlSupportLevel;	// 0x311c1319
@end
