//
//  LHbottomView.h
//  biUp
//
//  Created by snowimba on 15/12/7.
//  Copyright © 2015年 snowimba. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LHbottomView : UIView
@property (nonatomic, strong) NSArray* arrDict;
@property (weak, nonatomic) IBOutlet UILabel* titleLbl;
+ (instancetype)bottomViewWith;
@end
