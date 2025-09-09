
local Players = game:GetService("Players")
local TweenService = game:GetService("TweenService")
local UserInputService = game:GetService("UserInputService")

local player = Players.LocalPlayer
local playerGui = player:WaitForChild("PlayerGui")

local screenGui = Instance.new("ScreenGui")
screenGui.Name = "ModernPlayerUI"
screenGui.ResetOnSpawn = false
screenGui.Parent = playerGui

-- Main Frame
local mainFrame = Instance.new("Frame")
mainFrame.Name = "MainFrame"
mainFrame.Size = UDim2.new(0, 800, 0, 500)
mainFrame.Position = UDim2.new(0.5, -400, 0.5, -250)
mainFrame.BackgroundTransparency = 1
mainFrame.Parent = screenGui

-- Background with gradient
local background = Instance.new("Frame")
background.Name = "Background"
background.Size = UDim2.new(1, 0, 1, 0)
background.Position = UDim2.new(0, 0, 0, 0)
background.BackgroundColor3 = Color3.fromRGB(20, 25, 35)
background.BorderSizePixel = 0
background.Parent = mainFrame

-- Background gradient
local bgGradient = Instance.new("UIGradient")
bgGradient.Color = ColorSequence.new{
    ColorSequenceKeypoint.new(0, Color3.fromRGB(25, 30, 45)),
    ColorSequenceKeypoint.new(1, Color3.fromRGB(15, 20, 30))
}
bgGradient.Rotation = 45
bgGradient.Parent = background

-- Corner radius
local bgCorner = Instance.new("UICorner")
bgCorner.CornerRadius = UDim.new(0, 20)
bgCorner.Parent = background

-- Glow effect
local glowFrame = Instance.new("Frame")
glowFrame.Name = "GlowFrame"
glowFrame.Size = UDim2.new(1, 10, 1, 10)
glowFrame.Position = UDim2.new(0, -5, 0, -5)
glowFrame.BackgroundColor3 = Color3.fromRGB(100, 150, 255)
glowFrame.BackgroundTransparency = 0.8
glowFrame.BorderSizePixel = 0
glowFrame.ZIndex = -1
glowFrame.Parent = mainFrame

local glowCorner = Instance.new("UICorner")
glowCorner.CornerRadius = UDim.new(0, 25)
glowCorner.Parent = glowFrame

-- Header Section
local headerFrame = Instance.new("Frame")
headerFrame.Name = "HeaderFrame"
headerFrame.Size = UDim2.new(1, -40, 0, 80)
headerFrame.Position = UDim2.new(0, 20, 0, 20)
headerFrame.BackgroundTransparency = 1
headerFrame.Parent = mainFrame

-- Logo/Brand
local logoFrame = Instance.new("Frame")
logoFrame.Name = "LogoFrame"
logoFrame.Size = UDim2.new(0, 60, 0, 60)
logoFrame.Position = UDim2.new(0, 0, 0, 10)
logoFrame.BackgroundColor3 = Color3.fromRGB(255, 0, 0)
logoFrame.BorderSizePixel = 0
logoFrame.Parent = headerFrame

local logoCorner = Instance.new("UICorner")
logoCorner.CornerRadius = UDim.new(0, 30)
logoCorner.Parent = logoFrame

local logoGradient = Instance.new("UIGradient")
logoGradient.Color = ColorSequence.new{
    ColorSequenceKeypoint.new(0, Color3.fromRGB(255, 215, 0)),
    ColorSequenceKeypoint.new(1, Color3.fromRGB(255, 165, 0))
}
logoGradient.Rotation = 45
logoGradient.Parent = logoFrame

local logoText = Instance.new("TextLabel")
logoText.Size = UDim2.new(1, 0, 1, 0)
logoText.BackgroundTransparency = 1
logoText.Text = "!"
logoText.TextColor3 = Color3.fromRGB(255, 255, 255)
logoText.TextScaled = true
logoText.Font = Enum.Font.SourceSansBold
logoText.Parent = logoFrame

-- Facebook info
local facebookFrame = Instance.new("Frame")
facebookFrame.Name = "FacebookFrame"
facebookFrame.Size = UDim2.new(0, 260, 0, 40)
facebookFrame.Position = UDim2.new(0, 70, 0, 20)
facebookFrame.BackgroundColor3 = Color3.fromRGB(6, 54, 255)
facebookFrame.BorderSizePixel = 0
facebookFrame.Parent = headerFrame

local fbCorner = Instance.new("UICorner")
fbCorner.CornerRadius = UDim.new(0, 8)
fbCorner.Parent = facebookFrame

local facebookText = Instance.new("TextLabel")
facebookText.Size = UDim2.new(1, -20, 1, 0)
facebookText.Position = UDim2.new(0, 10, 0, 0)
facebookText.BackgroundTransparency = 1
facebookText.Text = "Created by Vector Hub Script Free"
facebookText.TextColor3 = Color3.fromRGB(255, 255, 255)
facebookText.TextScaled = true
facebookText.Font = Enum.Font.SourceSans
facebookText.TextXAlignment = Enum.TextXAlignment.Left
facebookText.Parent = facebookFrame

-- Content Section
local contentFrame = Instance.new("Frame")
contentFrame.Name = "ContentFrame"
contentFrame.Size = UDim2.new(1, -40, 0, 300)
contentFrame.Position = UDim2.new(0, 40, 0, 120)
contentFrame.BackgroundTransparency = 1
contentFrame.Parent = mainFrame

-- Player Info Card
local playerCard = Instance.new("Frame")
playerCard.Name = "PlayerCard"
playerCard.Size = UDim2.new(0, 350, 0, 250)
playerCard.Position = UDim2.new(0, 0, 0, 0)
playerCard.BackgroundColor3 = Color3.fromRGB(30, 35, 50)
playerCard.BorderSizePixel = 0
playerCard.Parent = contentFrame

local playerCardCorner = Instance.new("UICorner")
playerCardCorner.CornerRadius = UDim.new(0, 15)
playerCardCorner.Parent = playerCard

-- Player card gradient
local playerGradient = Instance.new("UIGradient")
playerGradient.Color = ColorSequence.new{
    ColorSequenceKeypoint.new(0, Color3.fromRGB(35, 40, 55)),
    ColorSequenceKeypoint.new(1, Color3.fromRGB(25, 30, 45))
}
playerGradient.Rotation = 135
playerGradient.Parent = playerCard

-- Player card glow
local playerGlow = Instance.new("Frame")
playerGlow.Name = "PlayerGlow"
playerGlow.Size = UDim2.new(1, 6, 1, 6)
playerGlow.Position = UDim2.new(0, -3, 0, -3)
playerGlow.BackgroundColor3 = Color3.fromRGB(255, 100, 100)
playerGlow.BackgroundTransparency = 0.7
playerGlow.BorderSizePixel = 0
playerGlow.ZIndex = -1
playerGlow.Parent = playerCard

local playerGlowCorner = Instance.new("UICorner")
playerGlowCorner.CornerRadius = UDim.new(0, 18)
playerGlowCorner.Parent = playerGlow

-- Player header
local playerHeader = Instance.new("TextLabel")
playerHeader.Name = "PlayerHeader"
playerHeader.Size = UDim2.new(1, -20, 0, 40)
playerHeader.Position = UDim2.new(0, 10, 0, 10)
playerHeader.BackgroundTransparency = 1
playerHeader.Text = "Username"
playerHeader.TextColor3 = Color3.fromRGB(180, 190, 210)
playerHeader.TextScaled = true
playerHeader.Font = Enum.Font.SourceSans
playerHeader.Parent = playerCard


-- Player avatar frame
local avatarFrame = Instance.new("ImageLabel")
avatarFrame.Name = "AvatarFrame"
avatarFrame.Size = UDim2.new(0, 90, 0, 90)
avatarFrame.Position = UDim2.new(0, 8, 0, 80)
avatarFrame.BackgroundColor3 = Color3.fromRGB(50, 70, 120)
avatarFrame.BorderSizePixel = 0
avatarFrame.ScaleType = Enum.ScaleType.Crop
avatarFrame.Parent = playerCard

-- ดึง avatar ของ player
local userId = player.UserId
avatarFrame.Image = "https://www.roblox.com/headshot-thumbnail/image?userId=" .. userId .. "&width=150&height=150&format=png"

local avatarCorner = Instance.new("UICorner")
avatarCorner.CornerRadius = UDim.new(0, 40)
avatarCorner.Parent = avatarFrame

-- เพิ่ม stroke เพื่อให้ดูสวยขึ้น
local avatarStroke = Instance.new("UIStroke")
avatarStroke.Color = Color3.fromRGB(24, 24, 24)
avatarStroke.Thickness = 3
avatarStroke.Parent = avatarFrame

-- Player name
local playerNameFrame = Instance.new("Frame")
playerNameFrame.Name = "PlayerNameFrame"
playerNameFrame.Size = UDim2.new(0, 220, 0, 80)
playerNameFrame.Position = UDim2.new(0, 110, 0, 80)
playerNameFrame.BackgroundTransparency = 1
playerNameFrame.Parent = playerCard

local playerName = Instance.new("TextLabel")
playerName.Name = "PlayerName"
playerName.Size = UDim2.new(1, 0, 1, 0)
playerName.BackgroundTransparency = 1
playerName.Text = game.Players.LocalPlayer.Name
playerName.TextColor3 = Color3.fromRGB(255, 255, 255)
playerName.TextScaled = true
playerName.Font = Enum.Font.SourceSansBold
playerName.TextXAlignment = Enum.TextXAlignment.Left
playerName.Parent = playerNameFrame

-- Level indicator
local levelFrame = Instance.new("Frame")
levelFrame.Name = "LevelFrame"
levelFrame.Size = UDim2.new(0, 80, 0, 25)
levelFrame.Position = UDim2.new(0, 0, 0, 0)
levelFrame.BackgroundColor3 = Color3.fromRGB(255, 215, 0)
levelFrame.BorderSizePixel = 0
levelFrame.Parent = statsFrame

local levelCorner = Instance.new("UICorner")
levelCorner.CornerRadius = UDim.new(0, 12)
levelCorner.Parent = levelFrame

local levelText = Instance.new("TextLabel")
levelText.Size = UDim2.new(1, 0, 1, 0)
levelText.BackgroundTransparency = 1
levelText.Text = "LV. 25"
levelText.TextColor3 = Color3.fromRGB(0, 0, 0)
levelText.TextScaled = true
levelText.Font = Enum.Font.SourceSansBold
levelText.Parent = levelFrame

-- Diamond Card
local diamondCard = Instance.new("Frame")
diamondCard.Name = "DiamondCard"
diamondCard.Size = UDim2.new(0, 350, 0, 250)
diamondCard.Position = UDim2.new(0, 370, 0, 0)
diamondCard.BackgroundColor3 = Color3.fromRGB(30, 35, 50)
diamondCard.BorderSizePixel = 0
diamondCard.Parent = contentFrame

local diamondCardCorner = Instance.new("UICorner")
diamondCardCorner.CornerRadius = UDim.new(0, 15)
diamondCardCorner.Parent = diamondCard

-- Diamond card gradient
local diamondGradient = Instance.new("UIGradient")
diamondGradient.Color = ColorSequence.new{
    ColorSequenceKeypoint.new(0, Color3.fromRGB(35, 40, 55)),
    ColorSequenceKeypoint.new(1, Color3.fromRGB(25, 30, 45))
}
diamondGradient.Rotation = 45
diamondGradient.Parent = diamondCard

-- Diamond card glow
local diamondGlow = Instance.new("Frame")
diamondGlow.Name = "DiamondGlow"
diamondGlow.Size = UDim2.new(1, 6, 1, 6)
diamondGlow.Position = UDim2.new(0, -3, 0, -3)
diamondGlow.BackgroundColor3 = Color3.fromRGB(100, 200, 255)
diamondGlow.BackgroundTransparency = 0.7
diamondGlow.BorderSizePixel = 0
diamondGlow.ZIndex = -1
diamondGlow.Parent = diamondCard

local diamondGlowCorner = Instance.new("UICorner")
diamondGlowCorner.CornerRadius = UDim.new(0, 18)
diamondGlowCorner.Parent = diamondGlow

-- Diamond header
local diamondHeader = Instance.new("TextLabel")
diamondHeader.Name = "DiamondHeader"
diamondHeader.Size = UDim2.new(1, -20, 0, 40)
diamondHeader.Position = UDim2.new(0, 10, 0, 10)
diamondHeader.BackgroundTransparency = 1
diamondHeader.Text = "Diamond"
diamondHeader.TextColor3 = Color3.fromRGB(180, 190, 210)
diamondHeader.TextScaled = true
diamondHeader.Font = Enum.Font.SourceSans
diamondHeader.Parent = diamondCard

-- Diamond icon
local diamondIcon = Instance.new("Frame")
diamondIcon.Name = "DiamondIcon"
diamondIcon.Size = UDim2.new(0, 90, 0, 90)
diamondIcon.Position = UDim2.new(0, 30, 0, 80)
diamondIcon.BackgroundColor3 = Color3.fromRGB(100, 200, 255)
diamondIcon.BorderSizePixel = 0
diamondIcon.Parent = diamondCard

local diamondIconCorner = Instance.new("UICorner")
diamondIconCorner.CornerRadius = UDim.new(0, 15)
diamondIconCorner.Parent = diamondIcon

local diamondIconGradient = Instance.new("UIGradient")
diamondIconGradient.Color = ColorSequence.new{
    ColorSequenceKeypoint.new(0, Color3.fromRGB(150, 220, 255)),
    ColorSequenceKeypoint.new(1, Color3.fromRGB(80, 150, 255))
}
diamondIconGradient.Rotation = 45
diamondIconGradient.Parent = diamondIcon

local diamondSymbol = Instance.new("TextLabel")
diamondSymbol.Size = UDim2.new(1, 0, 1, 0)
diamondSymbol.BackgroundTransparency = 1
diamondSymbol.Text = "💎"
diamondSymbol.TextColor3 = Color3.fromRGB(255, 255, 255)
diamondSymbol.TextScaled = true
diamondSymbol.Font = Enum.Font.SourceSansBold
diamondSymbol.Parent = diamondIcon

-- Diamond amount
local diamondAmount = Instance.new("TextLabel")
diamondAmount.Name = "DiamondAmount"
diamondAmount.Size = UDim2.new(0, 180, 0, 100)
diamondAmount.Position = UDim2.new(0, 140, 0, 80)
diamondAmount.BackgroundTransparency = 1
diamondAmount.TextColor3 = Color3.fromRGB(255, 255, 255)
diamondAmount.TextScaled = true
diamondAmount.Font = Enum.Font.SourceSansBold
diamondAmount.TextXAlignment = Enum.TextXAlignment.Left
diamondAmount.Parent = diamondCard

-- รอ UI ทีละชั้น (มี timeout กันวนรอเกินไป)
local pg = lp:WaitForChild("PlayerGui")
local interface = pg:WaitForChild("Interface", 10)
local diamondCount = interface and interface:WaitForChild("DiamondCount", 10)
local countLabel = diamondCount and diamondCount:WaitForChild("Count", 10)

if countLabel then
    diamondAmount.Text = "Diamond: " .. countLabel.Text
    -- อัพเดทตาม UI ตลอด
    countLabel:GetPropertyChangedSignal("Text"):Connect(function()
        diamondAmount.Text = "Diamond: " .. countLabel.Text
    end)
else
    diamondAmount.Text = "Diamond: Loading..."
end
-- Bottom Section
local bottomFrame = Instance.new("Frame")
bottomFrame.Name = "BottomFrame"
bottomFrame.Size = UDim2.new(1, -40, 0, 60)
bottomFrame.Position = UDim2.new(0, 20, 0, 440)
bottomFrame.BackgroundTransparency = 1
bottomFrame.Parent = mainFrame

-- Time Card
local timeCard = Instance.new("Frame")
timeCard.Name = "TimeCard"
timeCard.Size = UDim2.new(0, 300, 0, 50)
timeCard.Position = UDim2.new(0.5, -150, 0, 5)
timeCard.BackgroundColor3 = Color3.fromRGB(255, 215, 0)
timeCard.BorderSizePixel = 0
timeCard.Parent = bottomFrame

local timeCardCorner = Instance.new("UICorner")
timeCardCorner.CornerRadius = UDim.new(0, 25)
timeCardCorner.Parent = timeCard

local timeCardGradient = Instance.new("UIGradient")
timeCardGradient.Color = ColorSequence.new{
    ColorSequenceKeypoint.new(0, Color3.fromRGB(255, 215, 0)),
    ColorSequenceKeypoint.new(1, Color3.fromRGB(255, 165, 0))
}
timeCardGradient.Rotation = 45
timeCardGradient.Parent = timeCard

local timeText = Instance.new("TextLabel")
timeText.Name = "TimeText"
timeText.Size = UDim2.new(1, -20, 1, 0)
timeText.Position = UDim2.new(0, 10, 0, 0)
timeText.BackgroundTransparency = 1
timeText.Text = "⌛ Online Time: 2h 45m"
timeText.TextSize = 20
timeText.TextColor3 = Color3.fromRGB(0, 0, 0)
timeText.TextScaled = false
timeText.Font = Enum.Font.SourceSansBold
timeText.Parent = timeCard

local function UpdateTime()
    local GameTime = math.floor(workspace.DistributedGameTime + 0.5)
    local Hour = math.floor(GameTime / 3600) % 24
    local Minute = math.floor(GameTime / 60) % 60
    local Second = GameTime % 60
    timeText.Text = ("⌛ Hour : %02d Minute : %02d Second : %02d"):format(Hour, Minute, Second)
end

task.spawn(function()
    while task.wait(1) do
        pcall(UpdateTime)
    end
end)
-- Animations
local function createPulseAnimation(object, color)
    local tweenInfo = TweenInfo.new(2, Enum.EasingStyle.Sine, Enum.EasingDirection.InOut, -1, true)
    local tween = TweenService:Create(object, tweenInfo, {BackgroundTransparency = 0.9})
    tween:Play()
end

-- Apply animations
createPulseAnimation(playerGlow, Color3.fromRGB(255, 100, 100))
createPulseAnimation(diamondGlow, Color3.fromRGB(100, 200, 255))

-- Entrance animation
local entranceTweenInfo = TweenInfo.new(0.8, Enum.EasingStyle.Back, Enum.EasingDirection.Out)
mainFrame.Size = UDim2.new(0, 0, 0, 0)
local entranceTween = TweenService:Create(mainFrame, entranceTweenInfo, {Size = UDim2.new(0, 800, 0, 500)})
entranceTween:Play()

-- Close button
local closeButton = Instance.new("TextButton")
closeButton.Name = "CloseButton"
closeButton.Size = UDim2.new(0, 40, 0, 40)
closeButton.Position = UDim2.new(1, -50, 0, 10)
closeButton.BackgroundColor3 = Color3.fromRGB(255, 50, 50)
closeButton.BorderSizePixel = 0
closeButton.Text = "X"
closeButton.TextColor3 = Color3.fromRGB(255, 255, 255)
closeButton.TextScaled = true
closeButton.Font = Enum.Font.SourceSansBold
closeButton.Parent = mainFrame

local closeCorner = Instance.new("UICorner")
closeCorner.CornerRadius = UDim.new(0, 20)
closeCorner.Parent = closeButton

closeButton.MouseButton1Click:Connect(function()
    local closeTween = TweenService:Create(mainFrame, TweenInfo.new(0.5, Enum.EasingStyle.Back, Enum.EasingDirection.In), {Size = UDim2.new(0, 0, 0, 0)})
    closeTween:Play()
    closeTween.Completed:Connect(function()
        screenGui:Destroy()
    end)
end)

local CONFIG = {
    TIMER_MINUTES = 1,
    SHOW_LOGS = true,
    FAST_MODE = true,
    USE_TELEPORT = true,
    PLACE_ID_LOBBY = 79546208627805,
    PLACE_ID_INGAME = 126509999114328,
    SHEETS_URL = "https://docs.google.com/spreadsheets/d/1Tm7otP36UhAdqG2yUWXDG0pn0MBCUYNxjSL-1izAizk/export?format=csv",
}
-- 🕐 ระบบย้ายเซิร์ฟอัตโนมัติแบบง่าย (ไม่เช็คคน/ping)



 repeat wait() until game:IsLoaded() and game.Players.LocalPlayer
local player = game.Players.LocalPlayer
local deadname = player.Name .. " Body"
function AutoServerHop()
    local PlaceID = game.PlaceId
    local AllIDs = {}
    local foundAnything = ""
    local actualHour = os.date("!*t").hour
    local Deleted = false
    function TPReturner()
        local Site;
        if foundAnything == "" then
            Site = game.HttpService:JSONDecode(game:HttpGet('https://games.roblox.com/v1/games/' .. PlaceID .. '/servers/Public?sortOrder=Asc&limit=100'))
        else
            Site = game.HttpService:JSONDecode(game:HttpGet('https://games.roblox.com/v1/games/' .. PlaceID .. '/servers/Public?sortOrder=Asc&limit=100&cursor=' .. foundAnything))
        end
        local ID = ""
        if Site.nextPageCursor and Site.nextPageCursor ~= "null" and Site.nextPageCursor ~= nil then
            foundAnything = Site.nextPageCursor
        end
        local num = 0;
        for i,v in pairs(Site.data) do
            local Possible = true
            ID = tostring(v.id)
            if tonumber(v.maxPlayers) > tonumber(v.playing) then
                for _,Existing in pairs(AllIDs) do
                    if num ~= 0 then
                        if ID == tostring(Existing) then
                            Possible = false
                        end
                    else
                        if tonumber(actualHour) ~= tonumber(Existing) then
                            local delFile = pcall(function()
                                AllIDs = {}
                                table.insert(AllIDs, actualHour)
                            end)
                        end
                    end
                    num = num + 1
                end
                if Possible == true then
                    table.insert(AllIDs, ID)
                    wait()
                    pcall(function()
                        wait()
                        game:GetService("TeleportService"):TeleportToPlaceInstance(PlaceID, ID, game.Players.LocalPlayer)
                    end)
                end
            end
        end
    end
    function Teleport() 
        while wait() do
            pcall(function()
                TPReturner()
                if foundAnything ~= "" then
                    TPReturner()
                end
            end)
        end
    end
    Teleport()
end  

spawn(function()
while task.wait() do
    local body = workspace:WaitForChild("Characters"):FindFirstChild(deadname)
        if body then
            print("💀 ตายแล้ว (พบใน Characters)")
            AutoServerHop()
        end
    end
end)


local function getServerData()
    local ok, body = pcall(function()
        if request then
            return request({Url = CONFIG.SHEETS_URL, Method = "GET"}).Body
        elseif syn and syn.request then
            return syn.request({Url = CONFIG.SHEETS_URL, Method = "GET"}).Body
        else
            error("no request function available")
        end
    end)

    if not ok or not body then
        warn("Cannot fetch server list")
        return nil
    end

    local servers = {}
    local lineIndex = 0
    for line in body:gmatch("[^\r\n]+") do
        lineIndex = lineIndex + 1
        if lineIndex > 1 then -- skip header
            local parts = {}
            for part in line:gmatch('[^,]+') do
                part = part:gsub('"', '')
                table.insert(parts, part)
            end
            if #parts >= 3 then
                table.insert(servers, {id = parts[1], players = tonumber(parts[2]) or 0, maxPlayers = tonumber(parts[3]) or 0, lastUpdate = parts[4] or "Unknown"})
            end
        end
    end
    return servers
end

-- Find a server with few players (random pick among "good" ones)
local function findGoodServer()
    local servers = getServerData()
    if not servers or #servers == 0 then return nil end

    local choices = {}
    for _, s in ipairs(servers) do
        if s.id ~= game.JobId and s.players < s.maxPlayers and s.players <= 15 then
            table.insert(choices, s)
        end
    end
    if #choices == 0 then return nil end
    return choices[math.random(1, #choices)]
end

-- Join server by jobId
local function joinServer(jobId)
    if not jobId or isTeleporting then return false end
    isTeleporting = true

    local success, err = pcall(function()
        TeleportService:TeleportToPlaceInstance(game.PlaceId, jobId, localPlayer)
    end)

    if not success then
        warn("Teleport failed:", err)
        isTeleporting = false
        return false
    end

    -- fallback reset after 12 seconds
    task.delay(12, function()
        isTeleporting = false
    end)
    return true
end

local Player = game.Players.LocalPlayer    
local Http = game:GetService("HttpService")
local TPS = game:GetService("TeleportService")
local Api = "https://games.roblox.com/v1/games/"

local _place,_id = game.PlaceId, game.JobId
local _servers = Api.._place.."/servers/Public?sortOrder=Asc&limit=100"
function ListServers(cursor)
   local Raw = game:HttpGet(_servers .. ((cursor and "&cursor="..cursor) or ""))
   return Http:JSONDecode(Raw)
end

-- Anti-full server hop: collect diamonds then hop
local function antiFullServerHop()
    print("🛡️ เริ่มระบบย้ายเซิฟป้องกันเซิฟเต็ม Current JobId: " .. currentJobId)
    notify("Anti-Full Hop", "🛡️ กำลังค้นหาเซิฟที่ปลอดภัยที่สุด", 3)

    -- เก็บ Diamond ก่อนย้าย
    local success = checkAndCollectDiamondsBeforeHop()
    if success then
        print("💎 เก็บ Diamond เรียบร้อยก่อนย้ายเซิฟ")
        task.wait(1)
    else
        print("🔍 ตรวจพบปัญหา เช่น ตายหรือยังมี Diamond")
    end
    local Servers = ListServers()
   local Server = Servers.data[math.random(1,#Servers.data)]
   TPS:TeleportToPlaceInstance(_place, Server.id, Player)
    game:GetService("TeleportService"):Teleport(126509999114328)
    game.Players.LocalPlayer:Kick("Hopserver")
   local server = findGoodServer()
    joinServer(server.id)

end
