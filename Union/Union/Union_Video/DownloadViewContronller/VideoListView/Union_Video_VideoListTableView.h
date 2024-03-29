//
//  Union_Video_NewCollectionView.h
//  Union
//
//  Created by lanou3g on 15-7-19.
//  Copyright (c) 2015年 Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^SelectedVideoBlock)(NSMutableArray *videoArray , NSString *videoTitle);

@interface Union_Video_VideoListTableView : UITableView


@property (nonatomic , copy ) NSString *urlStr;//URL字符串

@property (nonatomic , copy ) SelectedVideoBlock selectedVideoBlock;//选中视频cellBlock


//请求视频详情数据

- (void)netWorkingGetVideoDetailsWithVID:(NSString *)vid Title:(NSString *)title;

@end
