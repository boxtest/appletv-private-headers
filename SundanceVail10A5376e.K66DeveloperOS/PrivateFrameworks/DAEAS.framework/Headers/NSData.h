/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingLeafNode.h"
#import <NSData.h> // Unknown library


@interface NSData (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x32263fe5
+ (BOOL)expectsContent;	// 0x32264409
+ (BOOL)frontingBasicTypes;	// 0x322640e1
+ (BOOL)notifyOfUnknownTokens;	// 0x32264135
+ (BOOL)parsingLeafNode;	// 0x32264039
+ (BOOL)parsingWithSubItems;	// 0x3226408d
- (id)initForLengthTokenOfLength:(unsigned)length;	// 0x3226440d
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x32264189
- (int)parsingState;	// 0x32264405
@end
