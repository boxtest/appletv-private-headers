/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "STSStgObject.h"


@interface STStorage : STSStgObject {
	Storage *m_pCStorage;	// 4 = 0x4
}
- (id)init;	// 0x34a66a51
- (id)initWithCStorage:(Storage *)cstorage;	// 0x34a66a65
- (void)close;	// 0x34a66ae9
- (void)dealloc;	// 0x34a66aa9
- (int)getChildType:(id)type;	// 0x34a66f5d
- (id)getChildrenInfo;	// 0x34a66dfd
- (id)getInfo;	// 0x34a66d25
- (id)openStorage:(id)storage withMode:(int)mode;	// 0x34a66c15
- (id)openStream:(id)stream withMode:(int)mode;	// 0x34a66b05
- (void)setClass:(SsrwOO_GUID)aClass;	// 0x34a66fa5
@end

